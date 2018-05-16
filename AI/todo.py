from flask import Flask, jsonify, request, abort, Response
from time import time
from uuid import uuid4
import json

app = Flask(__name__)

class Todo(object):
    def __init__(self, content):
        self.id = str(uuid4())
        self.content = content
        self.create_at = time()
        self.is_finished = False
        self.finish_at = None
    def finish(self):
        self.is_finished = True
        self.finish_at = time()
    def json(self):
        return {
            'id' : self.id,
            'content' : self.content,
            'created_at' : self.create_at,
            'is_finished' : self.is_finished,
            'finish_at' : self.finish_at
        }

todos = {}
get_todo = lambda tid : todos.get(tid, False)

@app.route("/todo")
def index():
    return jsonify(data = [todo.json() for todo in todos.values()])

@app.route("/todo", methods=['POST'])
def add():
    content = request.form.get('content', None)
    if not content:
        abort(400)
    todo = Todo(content)
    todos[todo.id] = todo
    return Response()

@app.route("/todo/<tid>/finish", methods = ['PUT'])
def finish(tid):
    todo = get_todo(tid)
    if todo:
        todo.finish()
        todos[todo.id] = todo
        return Response()
    abort(404)

@app.route('/todo/<tid>', methods=['DELETE'])
def delete(tid):
    todo= get_todo(tid)
    if todo:
        todo.pop(tid)
        return Response()
    abort(404)

if __name__ == '__main__':
    app.run(host='0.0.0.0', port = 8000)
                                  
