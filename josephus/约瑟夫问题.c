#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct Lnode
{
	struct Lnode *prior;
	struct Lnode *next;
	int num;
}Lnode;

/*链表初始化，生成长度为m的循环链表，并且节点值从1到m*/
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
/*从头部开始打印链表的值*/
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
/*数据处理，沿顺时针方向每数到第n个数划去一个数（n），然后沿反时针方向每数到第k个数就划去一个数，这样一直进行下去，直到最后一个数并返回该数*/
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
	printf("请输入你的链表长度m：\n");
	scanf("%d",&m);
	head=createList(m);
	printList(head);
	printf("请输入顺时针数的和逆时针数的个数：\n");
	scanf("%d",&n);
	scanf("%d",&k);
	result=josephus(head,n,k);
	printf("最终剩下的数是%d\n",result);
	return 0;
}
