#include <stdio.h>
void main()
{
	float c,f;
	printf("输入要转化的华氏温度\n");
    scanf("%f",&f);
    c=(5/9.0)*(f-32);
	printf("华氏温度=%.2f \n摄氏温度=%.2f\n",f,c);
}