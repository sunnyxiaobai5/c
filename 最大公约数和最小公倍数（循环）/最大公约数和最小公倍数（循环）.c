#include <stdio.h>
void main()
{
	int greatest_common_divisor(int x,int y);
	int a,b,c,d;
	printf("请输入你要求最大公约数和最小公倍数的两个数:");
	scanf("%d%d",&a,&b);
	c=greatest_common_divisor(a,b);
	d=a*b/c;
	printf("%d和%d的最大公约数是%d\n",a,b,c);
	printf("%d和%d的最小公倍数是%d\n",a,b,d);
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