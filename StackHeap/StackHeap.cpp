/****************************************************************************
 *------------------------------静态堆栈-------------------------------------
 *
 *   1.通过在堆中申请一块连续的内存空间，建立静态栈
 *   2.建立一个结构体，其成员包含两个指针，分别指向栈底和栈顶
 ***************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#define MAX_SIZE 100

typedef int ElemType;
typedef struct StackPointer
{
	ElemType *base;
	ElemType *top;
}StackPointer;

void InitStack(StackPointer *&S)
{
	S->top=S->base=(ElemType *)malloc(sizeof(ElemType) * MAX_SIZE); 
}
void DestroyStack(StackPointer *&S)
{
	free(S->base);
	S->top=S->base=NULL;
}
void ClearStack(StackPointer *&S)
{
	S->top=S->base;
}
int StackEmpty(StackPointer *S)
{
	return (S->top == S->base ? 1 : 0 );
}
int StackFull(StackPointer *S)
{
	return (S->top == S->base + MAX_SIZE);
}
int StackLength(StackPointer *S)
{
	return (S->top - S->base);
}
int GetTop(StackPointer *S,ElemType &e)
{
	if(StackEmpty(S))
	{
		printf("The Stack Is Empty!!");
		return 0;
	}
	e=*(--S->top);
	return 1;
}
int Push(StackPointer *&S,ElemType e)
{
	if(StackFull(S))
	{
		printf("The Stack Is Full");
		return 0;
	}
	*(S->top++)=e;
	return 1;
}
int Pop(StackPointer *&S,ElemType &e)
{
	if(StackEmpty(S))
	{
		printf("The Stack Is Empty");
		return 0;
	}
	e=*(--S->top);
	return 1;
} 

int main()
{
	int i,e;
	StackPointer *S=(StackPointer *)malloc(sizeof(StackPointer));
	InitStack(S);
	printf("请输入待转换的数：");
	scanf("%d",&i);
	while(i && !StackFull(S))
	{
		Push(S,i%8);
		i/=8;
	}
	int l=StackLength(S);
	printf("插入之后栈长度为%d\n",l);
	printf("转换为八进制是：");
	while(!StackEmpty(S))
	{
		Pop(S,e);
		printf("%d",e);
	}
	printf("\n");
	l=StackLength(S);
	printf("最后栈长度为：%d\n",l);
		
	DestroyStack(S);
	free(S);
	S=NULL;
	return 0;
}
