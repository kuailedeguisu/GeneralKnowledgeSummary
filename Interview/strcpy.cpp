https://blog.csdn.net/gpengtao/article/details/7464061/
    
strcpy的正确实现应为：

    char *my_strcpy(char *dst,const char *src)
    {
    	assert(dst != NULL);
    	assert(src != NULL);
    	char *ret = dst;
    	memcpy(dst,src,strlen(src)+1);
    	return ret;
    }

memcpy函数实现时考虑到了内存重叠的情况，可以完成指定大小的内存拷贝，它的实现方式建议查看文章“卓越的教练是如何训练高手的？”，会获益良多，这里仅粘帖函数memcpy函数的实现：

    void * my_memcpy(void *dst,const void *src,unsigned int count)
    {
         assert(dst);
         assert(src);
         void * ret = dst;
         if (dst <= src || (char *)dst >= ((char *)src + count))//源地址和目的地址不重叠，低字节向高字节拷贝
    	 {
    		 while(count--)
    		 {
    			 *(char *)dst = *(char *)src;
    			 dst = (char *)dst + 1;
    			 src = (char *)src + 1;
    		 }
    	 }
    	 else						//源地址和目的地址重叠，高字节向低字节拷贝
    	 { 
    		 dst = (char *)dst + count - 1;
    		 src = (char *)src + count - 1; 
    		 while(count--) 
    		 {
    			 *(char *)dst = *(char *)src;
    			 dst = (char *)dst - 1;
    			 src = (char *)src - 1;
    		 }
        }
    	return ret;
    }
    
    
    
    
    
