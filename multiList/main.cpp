#include <stdio.h>
#include <malloc.h>

//==================����ṹ��====================
typedef struct Lnode
{
	struct Lnode *prior;
	struct Lnode *next;
	int num;
}Lnode;
//================================================

//===================��������=====================
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

//===================�ͷ�����=====================
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

//====================��ʾ����====================
void PrintList(Lnode *head)
{
	while(head->next!=NULL)
	{
		printf("%d\n",head->next->num);
		head=head->next;
	}
}
//================================================

//===================����������=================
/*ע�����ų����벻ָ��ڵ��ָ���������˺����Ĳ���ֻ�������нڵ������*/
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

//===============����������x�ĸ���================
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
	printf("������������������ֵ������ctrl+z������\n");
	head=CreateList();
	n=ListLength(head);
	printf("����%d\n",n);
	PrintList(head);
	printf("��������Ҫͳ����Ŀ��Xֵ��");
	scanf("%d",&x);
	m=checkX(head,x);
	printf("%d�ĸ���Ϊ%d\n",x,m);
	DestroyList(head);
	return 0;
}
