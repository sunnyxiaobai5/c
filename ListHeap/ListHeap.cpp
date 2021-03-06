#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#define MAX_SIZE 100
typedef int ElemType;

/* 定义一个结构体，base 指向在堆中申请的空间的首地址即线性表首地址，length表示线性表实际长度 */
typedef struct ListPointer
{
	ElemType *base;
	int length;
}ListPointer;

void InitList(ListPointer &L)
{
	L.base=(ElemType *)malloc(sizeof(ElemType)*MAX_SIZE);
	L.length=0;
}
void DestroyList(ListPointer &L)
{
	free(L.base);
}
int ListEmpty(ListPointer L)
{
	return (L.length==0);
}
int ListLength(ListPointer L)
{
	return L.length;
}
int GetElem(ListPointer L,int i,ElemType &e)
{
	if(i<1 || i>ListLength(L))					/* 当 i<1 或者 i>length 时，i取值不合格，直接返回 0 ，取值失败 */
		return 0;
	e=*(L.base+(--i));							/* 要取第 i 个元素的值，即取下标为 i-1 的元素的值 */
	return 1;
}
int PriorElem(ListPointer L,ElemType cur_e,ElemType &pre_e)
{
	int n=1;
	int len=ListLength(L);
	while(n<=len-1 && *(L.base+(n++))==cur_e)	/* 当 n>=length 即下标值比最后一个还大时，跳出循环，取值失败；n++为下次循环 */
	{
		pre_e=*(L.base+n-1);					/* 当 cur_e 满足条件时，取其前驱的值，即下标 n-1 的值 */
		return 1;
	}
	return 0;
}
int NextElem(ListPointer L,ElemType cur_e,ElemType &next_e)
{
	int n=0;
	int len=ListLength(L);
	while(n<=len-2 && *(L.base+(n++))==cur_e)	/* 当 n>=lenth-1 即取到最后一个元素时，跳出循环，取值失败；n++为下次循环 */
	{
		next_e=*(L.base+n+1);					/* 当cur_e满足条件时，取其后继的值 */
		return 1;
	}
	return 0;
}
int ListInsert(ListPointer &L,int i,ElemType e)
{
	if(i<1 || i>(ListLength(L)+1))
		return 0;
	int n=ListLength(L);
	L.length++;
	while(n>=i)
	{
		*(L.base+n)=*(L.base+n-1);
		n--;
	}
	*(L.base+n)=e;
	return 1;
}
int ListDelete(ListPointer &L,int i,ElemType &e)
{
	if(i<1 || i>ListLength(L))
		return 0;
	int n=ListLength(L)-1;
	while(i<=n)
	{
		*(L.base+i-1)=*(L.base+i);
		i++;
	}
	L.length--;
	return 1;
}

int main()
{
	ListPointer P;
	printf("%d\n",*P.base);
	InitList(P);
	*(P.base)=2;
	printf("%d\n",*P.base);

			
	DestroyList(P);
	printf("%d\n",*P.base);
	return 0;
}

