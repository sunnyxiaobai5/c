#include <stdio.h>
void main()
{
	int greatest_common_divisor(int x,int y);
	int a,b,c;
	printf("请输入你要求最大公约数的两个数:");
	scanf("%d%d",&a,&b);
	c=greatest_common_divisor(a,b);
	printf("%d和%d的最大公约数是%d\n",a,b,c);
}
int greatest_common_divisor(int x,int y)
{
	int z;
	if(y>x)
	{
		z=x;
		x=y;
		y=z;
	}
	if(x%y==0)
	{
		return y;
	}
	else
	{
		z=x;
		x=y;
		y=z%y;
		greatest_common_divisor(x,y);
	}
}