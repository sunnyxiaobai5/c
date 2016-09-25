#include <stdio.h>

void main()
{
	int i,a,b,c;
	for(i=100;i<1000;i++)
	{
		a=i%10;                        //求个位数字
		b=i/10%10;					   //求十位数字
		c=i/100%10;                    //求百位数字
		if(i==a*a*a+b*b*b+c*c*c)
		{
			printf("%d\t",i);
		}
    }
}
