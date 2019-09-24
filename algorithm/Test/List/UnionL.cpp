#include <List>
#include "GetSqListElem.c"
void UnionL(List *La, List Lb) {
	int La_Len = ListLength(*La);
	int Lb_Len = ListLength(Lb);
	ElemType e;
	for (int i = 1; i < Lb_Len; ++i) {
		GetElem(Lb, i, &e);
		if (!LocateList(*La, e)) {
			ListInsert(La, ++La_Len, i);
		}
	}
}