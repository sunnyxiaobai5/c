#include <stdio.h>
#include <malloc.h>

//==================定义结构体====================
typedef struct Lnode
{
	struct Lnode *prior;
	struct Lnode *next;
	int num;
}Lnode;
//================================================

//===================创建链表=====================
Lnode * CreateList()
{
	Lnode *head,*p,*last;
	int num;
	head=last=(Lnode *)malloc(sizeof(Lnode));
	head->prior=NULL;
	head->next=NULL;
	while(scanf("%d",&num)!=EOF)
	{
		p=(Lnode *)malloc(sizeof(Lnode));
		p->num=num;
		p->next=NULL;
		p->prior=last;
		last->next=p;
		last=last->next;
	}
	return head;
}
//================================================

//===================释放链表=====================
void DestroyList(Lnode *head)
{
	Lnode *p;
	while((p=head)!=NULL)
	{
		head=head->next;
		free(p);
	}
}
//================================================

//====================显示链表====================
void PrintList(Lnode *head)
{
	while(head->next!=NULL)
	{
		printf("%d\n",head->next->num);
		head=head->next;
	}
}
//================================================

//===================计算链表长度=================
/*注：需排除传入不指向节点的指针的情况，此函数的参数只适用于有节点的链表*/
int ListLength(Lnode *head)
{
	int n=0;
	while(head->next!=NULL)
	{
		head=head->next;
		n++;
	}
	return n;
}
//================================================

//===============返回链表中x的个数================
int checkX(Lnode *head,int x)
{
	int n=0;
	while(head->next!=NULL)
	{
		head=head->next;
		if(head->num==x)
		{
			n++;
		}
	}
	return n;
}
//================================================

int main()
{
	int n,x,m;
	Lnode *head;
	printf("创建链表，请输入数据值，并以ctrl+z结束：\n");
	head=CreateList();
	n=ListLength(head);
	printf("链表长%d\n",n);
	PrintList(head);
	printf("请输入你要统计数目的X值：");
	scanf("%d",&x);
	m=checkX(head,x);
	printf("%d的个数为%d\n",x,m);
	DestroyList(head);
	return 0;
}
