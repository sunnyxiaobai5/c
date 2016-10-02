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

//================CreateNode�����������½ڵ�===============
List * CreateNode()
{
	List * node=NULL;
	node=(List *)malloc(sizeof(List));
	if(!node)
	{
		printf("���������ڵ�ʧ�ܣ���\n");
		exit(0);
	}
	else
	{
		node->next=NULL;
		return node;
	}
}
//=========================================================

//===============CreateList��������������==================
List * CreateList()
{
	List * head=NULL;
	List * last=NULL;
	List * q=NULL;
	int num,i=1;
	head=CreateNode();
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

//===============ListLength����������Ԫ�ظ���==============��ֵ��������ͷ�ڵ�
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

//=========GetElem��������e���������е�i��Ԫ�ص�ֵ=========
void GetElem(List * head,int i,int *e)
{
	int n;
	if(i<1 || i>ListLength(head))
	{
		printf("����ȡ�ڵ�λ�ô��󣡣�\n");
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

//======ListInsert�������������е�i��λ��ǰ������Ԫ��e=====
void ListInsert(List * head,int i,int *e)
{
	int n;
	List * p;
	if(i<1 || i>ListLength(head))
	{
		printf("������ڵ�λ�ô��󣡣�\n");
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

//========ListDelete��������������ɾ����i��λ��Ԫ��========
void ListDelete(List * head,int i)
{
	int n;
	List *p;
	if(i<1 || i>ListLength(head))
	{
		printf("����ɾ���Ľڵ�λ�ô��󣡣�\n");
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
//==============Menu������������������˵�=================
void Menu()
{
	printf("\n*******************************************************************************\n");
	printf("-------------��������Ҫ��������ػ������в������������ʾ���в���--------------\n");
	printf("\t     1: ��������\n");
	printf("\t     2: ��ʾ����\n");
	printf("\t     3: ��ȡ�ض�����Ԫ��\n");
	printf("\t     4: �������в�������ȡ��Ԫ��\n");
	printf("\t     5: ɾ�������е�Ԫ��\n");
	printf("\t     6: �ͷ�����\n");
	printf("\t     7: ��ʾ�˵�\n");
	printf("\t     0: ��ɲ���");
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
			case 3:GetElem(head,1,&e);printf("��ȡ�õ�Ԫ����%d\n",e);break;
			case 4:ListInsert(head,1,&e);break;
			case 5:ListDelete(head,3);printf("ɾ�����˱��е�3��Ԫ��\n");break;
			case 6:DestroyList(head);break;
			case 7:Menu();break;
			case 0:printf("��ɲ���\n");DestroyList(head);exit(0);
		}
	}
}
//=========================================================

int main()
{
	Choose();
	return 0;
}
