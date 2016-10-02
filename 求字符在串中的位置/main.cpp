//找出字符在字符串中的位置
#include <stdio.h>
#include <string.h>
#define N 100

int match(char *p,char ch);
int main()
{
	char str[N],ch;
	int n;
	printf("请输入一段字符串:");
	gets(str);
	printf("请输入你要匹配的字符:");
	ch=getchar();//若输入空格，亦将可以进行匹配
	n=match(str,ch);
	if(n>0)
	{
        printf("在第%d位匹配",n);
        return 0;
	}
	printf("不匹配！！！");
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
