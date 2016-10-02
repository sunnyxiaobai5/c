#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(void * vp1,void * vp2,int size)
{
    char buff[size];//gcc能够支持，但是兼容所有的 ANSI C 不允许，因此可以用malloc在堆中申请内存的方式
    memcpy(buff,vp1,size);
    memcpy(vp1,vp2,size);
    memcpy(vp2,buff,size);
}

int main()
{
    int i=1,j=2;
    printf("%d,%d\n",i,j);
    swap(&i,&j,sizeof(int));
    printf("%d,%d\n",i,j);
    printf("%d",(getchar()!=EOF));
    return 0;
}
