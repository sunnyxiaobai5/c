#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

//=====================定义结构体==========================
typedef struct List
{
	int num;
	struct List * next;
}List;
//=========================================================

//===============CreateList函数，生成链表==================
List * CreateList()
{
	List * head=NULL;
	List * last=NULL;
	List * q=NULL;
	int num,i=1;
	head=(List *)malloc(sizeof(List));
	head->next=NULL;
	last=head;
	printf("创建链表，请输入你的值，并以ctrl+z结束！！\n");
	printf("请输入第%2d 个数：",i++);
	while(scanf("%d",&num)!=EOF)
	{
		printf("请输入第%2d 个数：",i++);
		last->next=(List *)malloc(sizeof(List));
		last=last->next;	
		last->num=num;
		last->next=NULL;
	}
	return head;
}
//=========================================================

//================DestroyList函数，释放链表================
void DestroyList(List * head)
{
	List * p=NULL;
	while(head->next!=NULL)
	{
		p=head;
		head=head->next;
		free(p);
	}
	free(head);
}
//=========================================================

//=================PrintList函数，打印链表=================

void PrintList(List * head)
{
	List * p;
	printf("==============开始打印链表=============\n");
	p=head->next;		//有额外空头结点时执行
	while(p!=NULL)
	{
		printf("%d\n",p->num);
		p=p->next;
	}
	printf("==============链表打印完毕!!===========\n");
}

//=========================================================

//=========================================================
void Reverse(List *head)
{
	List *subHead,*p,*last;
	if(head->next->next==NULL)
	{
		return;
	}
	subHead=head->next;
	p=subHead->next;
	last=head->next;
	while(1)
	{
		head->next=p;
		if(p->next==NULL)
		{
			p->next=subHead;
			last->next=NULL;
			break;
		}
		last->next=p->next;
		p->next=subHead;
		p=last->next;
		subHead=head->next;
	}
}
//=========================================================
int main()
{
	List *head;
	head=CreateList();
	PrintList(head);
	Reverse(head);
	PrintList(head);
	DestroyList(head);
	return 0;
}
