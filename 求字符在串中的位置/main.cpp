//�ҳ��ַ����ַ����е�λ��
#include <stdio.h>
#include <string.h>
#define N 100

int match(char *p,char ch);
int main()
{
	char str[N],ch;
	int n;
	printf("������һ���ַ���:");
	gets(str);
	printf("��������Ҫƥ����ַ�:");
	ch=getchar();//������ո��ཫ���Խ���ƥ��
	n=match(str,ch);
	if(n>0)
	{
        printf("�ڵ�%dλƥ��",n);
        return 0;
	}
	printf("��ƥ�䣡����");
}
int match(char *p,char ch)
{
    int i=0;
	while(p[i])
	{
		if(p[i]==ch)
		{
			return ++i;
		}
		i++;
	}
	return -1;
}
