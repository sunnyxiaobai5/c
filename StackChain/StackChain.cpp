#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
typedef int ElemType;

typedef struct SqStack
{
	ElemType Data;
	struct SqStack *Next;
}SqStack;

void InitStack(SqStack *&Top)
{
	Top=(SqStack *)malloc(sizeof(SqStack));
	Top->Next=NULL;
}
void DestroyStack(SqStack *&Top)
{
	SqStack *q=NULL;
	while(Top->Next!=NULL)
	{
		q=Top->Next;
		Top->Next=q->Next;
		free(q);
	}
	free(Top);
	Top=NULL;
}
void ClearStack(SqStack *&Top)
{
	SqStack *q=NULL;
	while(Top->Next!=NULL)
	{
		q=Top->Next;
		Top->Next=q->Next;
		free(q);
	}
	Top->Next=NULL;
}			
int StackEmpty(SqStack *Top)
{
	return (Top->Next==NULL ? 1 : 0);
}
int StackLength(SqStack *Top)
{
	int i=0;
	while(!StackEmpty(Top))
	{
		i++;
		Top=Top->Next;
	}
	return i;
}
int GetTop(SqStack *Top,ElemType &e)
{
	if(StackEmpty(Top))
	{
		printf("The Stack Is Empty!!");
		return 0;
	}
	e=Top->Next->Data;
}	
void Push(SqStack *&Top,ElemType e)
{
	SqStack *q=(SqStack *)malloc(sizeof(SqStack));
	q->Data=e;
	q->Next=Top->Next;
	Top->Next=q;
}
int Pop(SqStack *&Top,ElemType &e)
{
	SqStack *q=NULL;
	if(StackEmpty(Top))
	{
		printf("The Stack Is Free");
		return 0;
	}
	q=Top->Next;
	e=q->Data;
	Top->Next=q->Next;
	return 1;
}


int main(int argc,char **argv) 
{ 
	SqStack *S;
	int i,e;
	InitStack(S);
	printf("请输入你要转换的数：");
	scanf("%d",&i);
	while(i)
	{
		Push(S,i%8);
		i/=8;
	}
	printf("转换为八进制是：");
	while(!StackEmpty(S))
	{
		Pop(S,e);
		printf("%d",e);
	}
	printf("\n");

	DestroyStack(S);
	return 0;
} 
