/*
目的：用指针将十个数中最小的排在最前面，最大的排在最后面
要求：写三个函数，1.输入数据，2.处理数据，3.输出数据	
*/
#include <stdio.h>
#define N 100
void in(int *a,int i);
void out(int *p);
void find(int *p,int i);
int main()
{
	int a[N],n,*p;
	printf("请输入你要比较的数据个数 ");
	scanf("%d",&n);
	in(a,n);
	find(a,n);
	out(a,n);
	return 0;
}

void in(int *p,int i)//自定义一个函数in()，参数是存储数据的首地址和数据个数i，实现i个数据的的输入。
{
	int n;
	printf("请输入%d个数: ",i);
	for(n=0;n<i;n++)
	{
		scanf("%d",p++);
	}
}
void find(int *p,int i)//自定义一个函数find()，参数是存储数据的首地址和数据长度，实现最小数排在第一位，最大数排在最后一位。
{
	int n,*min=p,*max=p,*q=p,temp;
	//查找出最小的数并和第一个数交换。
	for(n=0;n<i;n++,++q)
	{
		if(*min>*q)
			min=q;
	}
	temp=*p;
	*p=*min;
	*min=temp;
	//查找出最大的数并和最后一个数交换。
	for(q=p,n=0;n<i;n++,++q)
	{
		if(*max<*q)
			max=q;
	}
	temp=*(p+i-1);
	*(p+i-1)=*max;
	*max=temp;
}
void out(int *p,int i)//自定义一个函数out()，参数是存储数据的首地址和数据个数i，实现i个数据即所有数据的输出。
{
	int n;
	printf("处理后的结果是: ");
	for(n=0;n<i;n++,p++)
	{
		printf("%d ",*p);
	}
	printf("\n");
}
