#include <stdio.h>

void main()
{
	int i,a,b,c;
	for(i=100;i<1000;i++)
	{
		a=i%10;                        //���λ����
		b=i/10%10;					   //��ʮλ����
		c=i/100%10;                    //���λ����
		if(i==a*a*a+b*b*b+c*c*c)
		{
			printf("%d\t",i);
		}
    }
}
