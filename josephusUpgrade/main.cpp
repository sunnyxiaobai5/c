#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct Lnode
{
	struct Lnode *prior;
	struct Lnode *next;
	int num;
}Lnode;

/*�����ʼ�������ɳ���Ϊm��ѭ���������ҽڵ�ֵ��1��m*/
Lnode * createList(int m)
{
	int i;
	Lnode *head,*last;
	head=(Lnode *)malloc(sizeof(Lnode));
	head->num=1;
	head->prior=head->next=head;
	for(i=2;i<=m;i++)
	{
		last=(Lnode *)malloc(sizeof(Lnode));
		last->num=i;
		last->prior=head->prior;
		last->next=head;
		last->prior->next=last;
		head->prior=last;
	}
	return head;
}
/*��ͷ����ʼ��ӡ�����ֵ*/
void printList(Lnode *head)
{
	Lnode *p;
	p=head;
	while(head->next!=p)
	{
		printf("%d ",head->num);
		head=head->next;
	}
	printf("%d\n",head->num);
}
/*���ݴ�����˳ʱ�뷽��ÿ������n������ȥһ������n����Ȼ���ط�ʱ�뷽��ÿ������k�����ͻ�ȥһ����������һֱ������ȥ��ֱ�����һ���������ظ���*/
int josephus(Lnode * head,int n,int k)
{
	int i,j,result;
	Lnode *p;
	while(1)
	{
		if(head->next==head)
			break;
		for(i=1;i<=n-1;i++)
		{
			head=head->next;
		}
		p=head;
		head=head->prior;
		head->next=p->next;
		p->next->prior=head;
		free(p);
		if(head->prior==head)
			break;
		for(j=1;j<=k-1;j++)
		{
			head=head->prior;
		}
		p=head;
		head=head->next;
		head->prior=p->prior;
		p->prior->next=head;
		free(p);
	}
	result=head->num;
	free(head);
	return result;
}
int main()
{
	int m,n,k,result;
	Lnode *head;
	printf("���������������m��\n");
	scanf("%d",&m);
	head=createList(m);
	printList(head);
	printf("������˳ʱ�����ĺ���ʱ�����ĸ�����\n");
	scanf("%d",&n);
	scanf("%d",&k);
	result=josephus(head,n,k);
	printf("����ʣ�µ�����%d\n",result);
	return 0;
}
