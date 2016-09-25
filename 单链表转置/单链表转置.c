#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

//=====================����ṹ��==========================
typedef struct List
{
	int num;
	struct List * next;
}List;
//=========================================================

//===============CreateList��������������==================
List * CreateList()
{
	List * head=NULL;
	List * last=NULL;
	List * q=NULL;
	int num,i=1;
	head=(List *)malloc(sizeof(List));
	head->next=NULL;
	last=head;
	printf("�����������������ֵ������ctrl+z��������\n");
	printf("�������%2d ������",i++);
	while(scanf("%d",&num)!=EOF)
	{
		printf("�������%2d ������",i++);
		last->next=(List *)malloc(sizeof(List));
		last=last->next;	
		last->num=num;
		last->next=NULL;
	}
	return head;
}
//=========================================================

//================DestroyList�������ͷ�����================
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

//=================PrintList��������ӡ����=================

void PrintList(List * head)
{
	List * p;
	printf("==============��ʼ��ӡ����=============\n");
	p=head->next;		//�ж����ͷ���ʱִ��
	while(p!=NULL)
	{
		printf("%d\n",p->num);
		p=p->next;
	}
	printf("==============�����ӡ���!!===========\n");
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
