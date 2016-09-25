#include <stdio.h>
#include <malloc.h>
#define LEN 40
#define N 5
#define SIZE sizeof(Lnode)
typedef struct Lnode
{
	int num;
	struct Lnode * next;
}Lnode;

void ShowList(Lnode * start)
{
	Lnode *p=start;
	printf("============================================================================\n");
	while(p->next!=start)
	{
		printf("%d\t",p->num);
		p=p->next;
	}
	printf("%d\n",p->num);
	printf("============================================================================\n");

}
int main()
{
	Lnode *start=NULL,*p=NULL,*last=NULL,*q;
	int i;
	start=(Lnode *)malloc(SIZE);
	start->num=1;
	start->next=start;
	q=start;
	p=last=start;
	for(i=2;i<=LEN;i++)
	{
		last->next=(Lnode *)malloc(SIZE);
		last=last->next;
		last->num=i;
		last->next=start;
	}
	ShowList(start);
	while(start!=start->next)
	{
		for(i=2;i<N;i++)
		{
			p=start=start->next;
		}
		start=start->next;
		p->next=start->next;
		free(start);
		start=p->next;
		ShowList(start);
	}
	return 0;
}
