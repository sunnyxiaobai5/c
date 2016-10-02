#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#define MAX_SIZE 100
typedef int ElemType;

/* ����һ���ṹ�壬base ָ���ڶ�������Ŀռ���׵�ַ�����Ա��׵�ַ��length��ʾ���Ա�ʵ�ʳ��� */
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
	if(i<1 || i>ListLength(L))					/* �� i<1 ���� i>length ʱ��iȡֵ���ϸ�ֱ�ӷ��� 0 ��ȡֵʧ�� */
		return 0;
	e=*(L.base+(--i));							/* Ҫȡ�� i ��Ԫ�ص�ֵ����ȡ�±�Ϊ i-1 ��Ԫ�ص�ֵ */
	return 1;
}
int PriorElem(ListPointer L,ElemType cur_e,ElemType &pre_e)
{
	int n=1;
	int len=ListLength(L);
	while(n<=len-1 && *(L.base+(n++))==cur_e)	/* �� n>=length ���±�ֵ�����һ������ʱ������ѭ����ȡֵʧ�ܣ�n++Ϊ�´�ѭ�� */
	{
		pre_e=*(L.base+n-1);					/* �� cur_e ��������ʱ��ȡ��ǰ����ֵ�����±� n-1 ��ֵ */
		return 1;
	}
	return 0;
}
int NextElem(ListPointer L,ElemType cur_e,ElemType &next_e)
{
	int n=0;
	int len=ListLength(L);
	while(n<=len-2 && *(L.base+(n++))==cur_e)	/* �� n>=lenth-1 ��ȡ�����һ��Ԫ��ʱ������ѭ����ȡֵʧ�ܣ�n++Ϊ�´�ѭ�� */
	{
		next_e=*(L.base+n+1);					/* ��cur_e��������ʱ��ȡ���̵�ֵ */
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
