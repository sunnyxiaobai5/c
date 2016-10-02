#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

typedef int ElemType;
typedef struct List
{
	ElemType Array[MAX_SIZE];
	int length;
}List;

void InitList(List &L)
{
	L.length=0;
}
void ClearList(List &L)
{
	L.length=0;
}
int ListEmpty(List L)
{
	return (L.length==0);
}
int ListLength(List L)
{
	return L.length;
}
int GetElem(List L,int i,ElemType &e)
{
	if(i<1 || i>ListLength(L))				/* 当 i<1 或者 i>length 时，不在线性表内 */
		return 0;
	e=L.Array[i];
	return 1;
}
int LocateElem(List L,ElemType e,int i)				/* i>0返回第一个大于e的元素的位置;i=0，等于;i<0，小于 */
{
	int n=0;
	if(i==0)
	{
		while(n<ListLength(L) && L.Array[n++]==e)	/* 当 i==0 时，求等于e的元素位置，当 n>length时，不再循环 */
			return --n;
	}
	else if(i>0)
	{
		while(n<ListLength(L) && L.Array[n++]>e)	/* 当 i>0 时，求大于e的元素位置，当 n>length时，不再循环 */
			return --n;
	}
	else
	{
		while(n<ListLength(L) && L.Array[n++]<e)	/* 当 i<0 时，求小于e的元素位置，当 n>length时，不再循环 */
			return --n;
	}
	return 0;						/* 当不满足条件时，返回 0 */
}
int PriorElem(List L,ElemType cur_e,ElemType &pre_e)
{
	int n=1;
	while(n<ListLength(L) && L.Array[n++]==cur_e)	 	/* 当 i>length 时，不再循环，返回 0; n设为1，因为第一个元素没有前驱 */
	{
		pre_e=L.Array[--n];
		return 1;
	}
	return 0;
}
int NextElem(List L,ElemType cur_e,ElemType &next_e)
{
	int n=0;
	while(n<(ListLength(L)-1) && L.Array[n++]==cur_e)再	/* 当 i>length-1 时，不循环，返回 0 */
	{
		next_e=L.Array[--n];
		return 1;
	}
	return 0;
}
int ListInsert(List &L,int i,ElemType e)
{
	if(i<1 || i>(ListLength(L)+1))				/* 当 i<1 或者 i>length+1 时，直接返回，插入位置错误 */
		return 0;
	int n=ListLength(L);
	L.length++;						/* 长度 +1 */
	while(i<=n)						/* 将下标在 i 之后（包括i）的元素均向后移 1 位 */
	{
		L.Array[n]=L.Array[n-1];
		n--;
	}
	L.Array[n]=e;
	return 1;
}
int ListDelete(List &L,int i,ElemType &e)
{
	if(i<1 || i>ListLength(L))				/* 当 i<1 或者 i>length 时，直接返回，删除位置错误 */
		return 0;
	int n=ListLength(L)-1;
	e=L.Array[i-1];						/* 将将要删除的元素赋值给 e */
	while(i<=n)						/* 将下标在 i 之后（包括i）的元素均向前移 1 位 */
	{
		L.Array[i-1]=L.Array[i];
	}
	L.length--;						/* 长度 -1 */
	return 1;
}

int main()
{
	List L;
	InitList(L);
	int n;
	n=sizeof(L);
	printf("%d%d\n",n,ListLength(L));

	return 0;
}
