/*
目的：输入时间年月日，判断其是该年中的多少天并输出。
要求：通过结构体定义年月日。
注意：闰年与平年的差异。
*/

#include <stdio.h>
#include <stdlib.h>
int checktime(int year,int month,int day);
//定义一个包括三个int型成员变量的结构体，并将其命名为time
typedef	struct
	{
		int year;
		int month;
		int day;
	}time;

int main()
{
	time date;
	int n;
	printf("请输入你要查询的年：");
	scanf("%d",&date.year);
	printf("请输入你要查询的月份：");
	scanf("%d",&date.month);
	printf("请输入你要查询的天数：");
	scanf("%d",&date.day);
	n=checktime(date.year,date.month,date.day);
	printf("你要查找的日期是该年中的第%d天\n",n);
	return 0;
}
//自定义一个函数checktime()，传入三个int型参数，确定该时间是该年中的第n天，并返回n。
int checktime(int year,int month,int day)
{
	int n;
	switch(month)
	{
	case 1: n=0; break;
	case 2: n=31; break;
	case 3: n=59; break;
	case 4: n=90; break;
	case 5: n=120; break;
	case 6: n=151; break;
	case 7: n=181; break;
	case 8: n=212; break;
	case 9: n=243; break;
	case 10: n=273; break;
	case 11: n=304; break;
	case 12: n=334; break;
	}
	n+=day;
	if((year%400==0 || year%100!=0 && year%4==0) && month>2)
		n+=1;
	return n;
}
