#include <stdio.h>
void main()
{
	int greatest_common_divisor(int x,int y);
	int a,b,c,d;
	printf("��������Ҫ�����Լ������С��������������:");
	scanf("%d%d",&a,&b);
	c=greatest_common_divisor(a,b);
	d=a*b/c;
	printf("%d��%d�����Լ����%d\n",a,b,c);
	printf("%d��%d����С��������%d\n",a,b,d);
}
int greatest_common_divisor(int x,int y)
{
	int z;
	if(y>z)
	{
		z=x;
		x=y;
		y=z;
	}
	while(x%y!=0)
	{
		z=x;
		x=y;
		y=z%y;
	}
	return y;
}