/*
Ŀ�ģ�����ʱ�������գ��ж����Ǹ����еĶ����첢�����
Ҫ��ͨ���ṹ�嶨�������ա�
ע�⣺������ƽ��Ĳ��졣
*/

#include <stdio.h>
#include <stdlib.h>
int checktime(int year,int month,int day);
//����һ����������int�ͳ�Ա�����Ľṹ�壬����������Ϊtime
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
	printf("��������Ҫ��ѯ���꣺");
	scanf("%d",&date.year);
	printf("��������Ҫ��ѯ���·ݣ�");
	scanf("%d",&date.month);
	printf("��������Ҫ��ѯ��������");
	scanf("%d",&date.day);
	n=checktime(date.year,date.month,date.day);
	printf("��Ҫ���ҵ������Ǹ����еĵ�%d��\n",n);
	return 0;
}
//�Զ���һ������checktime()����������int�Ͳ�����ȷ����ʱ���Ǹ����еĵ�n�죬������n��
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
