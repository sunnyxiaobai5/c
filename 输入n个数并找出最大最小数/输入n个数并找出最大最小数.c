/*
Ŀ�ģ���ָ�뽫ʮ��������С��������ǰ�棬�������������
Ҫ��д����������1.�������ݣ�2.�������ݣ�3.�������	
*/
#include <stdio.h>
#define N 100
void in(int *a,int i);
void out(int *p);
void find(int *p,int i);
int main()
{
	int a[N],n,*p;
	printf("��������Ҫ�Ƚϵ����ݸ��� ");
	scanf("%d",&n);
	in(a,n);
	find(a,n);
	out(a,n);
	return 0;
}

void in(int *p,int i)//�Զ���һ������in()�������Ǵ洢���ݵ��׵�ַ�����ݸ���i��ʵ��i�����ݵĵ����롣
{
	int n;
	printf("������%d����: ",i);
	for(n=0;n<i;n++)
	{
		scanf("%d",p++);
	}
}
void find(int *p,int i)//�Զ���һ������find()�������Ǵ洢���ݵ��׵�ַ�����ݳ��ȣ�ʵ����С�����ڵ�һλ��������������һλ��
{
	int n,*min=p,*max=p,*q=p,temp;
	//���ҳ���С�������͵�һ����������
	for(n=0;n<i;n++,++q)
	{
		if(*min>*q)
			min=q;
	}
	temp=*p;
	*p=*min;
	*min=temp;
	//���ҳ��������������һ����������
	for(q=p,n=0;n<i;n++,++q)
	{
		if(*max<*q)
			max=q;
	}
	temp=*(p+i-1);
	*(p+i-1)=*max;
	*max=temp;
}
void out(int *p,int i)//�Զ���һ������out()�������Ǵ洢���ݵ��׵�ַ�����ݸ���i��ʵ��i�����ݼ��������ݵ������
{
	int n;
	printf("�����Ľ����: ");
	for(n=0;n<i;n++,p++)
	{
		printf("%d ",*p);
	}
	printf("\n");
}
