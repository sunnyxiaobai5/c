//�Ƚ������ַ�����С������С������� eg���ַ������ֵ�˳�����----��strcmp()����ԭ��
#include <stdio.h>
#include <string.h>
#define N 100
void sort(char *p1,char *p2);
int main()
{
	char str1[N],str2[N];
	printf("�������һ���ַ��� ");
	gets(str1);
	printf("������ڶ����ַ��� ");
	gets(str2);
	printf("�Ƚ�ǰ���ַ������� ");
	printf("%s\t%s\n",str1,str2);
	sort(str1,str2);
	printf("�ȽϺ���ַ������� ");
	printf("%s\t%s\n",str1,str2);
	return 0;
}
void sort(char *p1,char *p2)
{
	int i;
	char temp[N],*pt=temp;
	for(i=0;i<N;i++)
	{
		if(p2[i]<p1[i])
		{
			strcpy(pt,p2);
			strcpy(p2,p1);
			strcpy(p1,pt);
			break;
		}
	}
}