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

//================CreateNode函数，生成新节点===============
List * CreateNode()
{
	List * node=NULL;
	node=(List *)malloc(sizeof(List));
	if(!node)
	{
		printf("创建创建节点失败！！\n");
		exit(0);
	}
	else
	{
		node->next=NULL;
		return node;
	}
}
//=========================================================

//===============CreateList函数，生成链表==================
List * CreateList()
{
	List * head=NULL;
	List * last=NULL;
	List * q=NULL;
	int num,i=1;
	head=CreateNode();
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

//===============ListLength函数，返回元素个数==============数值不包含空头节点
int ListLength(List * head)
{
	int n=0;
	while(head->next!=NULL)
	{
		n++;
		head=head->next;
	}
	return n;
}
//=========================================================

//=========GetElem函数，用e返回链表中第i个元素的值=========
void GetElem(List * head,int i,int *e)
{
	int n;
	if(i<1 || i>ListLength(head))
	{
		printf("所获取节点位置错误！！\n");
		exit(0);
	}
	else
	{
		for(n=0;n<i;n++)
		{
			head=head->next;
		}
		*e=head->num;
	}
}
//=========================================================

//======ListInsert函数，在链表中第i个位置前插入新元素e=====
void ListInsert(List * head,int i,int *e)
{
	int n;
	List * p;
	if(i<1 || i>ListLength(head))
	{
		printf("所插入节点位置错误！！\n");
		exit(0);
	}
	else
	{
		for(n=1;n<i;n++)
		{
			head=head->next;
		}
		p=(List *)malloc(sizeof(List));
		p->num=*e;
		p->next=head->next;
		head->next=p;
	}
}
//=========================================================

//========ListDelete函数，在链表中删除第i个位置元素========
void ListDelete(List * head,int i)
{
	int n;
	List *p;
	if(i<1 || i>ListLength(head))
	{
		printf("所需删除的节点位置错误！！\n");
		exit(0);
	}
	else
	{
		for(n=1;n<i;n++)
		{
			head=head->next;
		}
		p=head->next;
		head->next=head->next->next;
		free(p);
	}
}
//=========================================================
//==============Menu函数，创建链表操作菜单=================
void Menu()
{
	printf("\n*******************************************************************************\n");
	printf("-------------本程序主要对链表相关基础进行操作，请根据提示进行操作--------------\n");
	printf("\t     1: 创建链表\n");
	printf("\t     2: 显示链表\n");
	printf("\t     3: 获取特定链表元素\n");
	printf("\t     4: 向链表中插入所获取的元素\n");
	printf("\t     5: 删除链表中的元素\n");
	printf("\t     6: 释放链表\n");
	printf("\t     7: 显示菜单\n");
	printf("\t     0: 完成操作");
	printf("\n*******************************************************************************\n");
}
//=========================================================
//=========================================================
void Choose()
{
	int n,e;
	List * head;
	Menu();
	while(scanf("%d",&n)!=0)
	{
		switch(n)
		{
			case 1:head=CreateList();break;
			case 2:PrintList(head);break;
			case 3:GetElem(head,1,&e);printf("所取得的元素是%d\n",e);break;
			case 4:ListInsert(head,1,&e);break;
			case 5:ListDelete(head,3);printf("删除链了表中低3个元素\n");break;
			case 6:DestroyList(head);break;
			case 7:Menu();break;
			case 0:printf("完成操作\n");DestroyList(head);exit(0);
		}
	}
}
//=========================================================

int main()
{
	Choose();
	return 0;
}
