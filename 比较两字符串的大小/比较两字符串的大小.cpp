//比较两个字符串大小，并从小到大输出 eg：字符串按字典顺序输出----类strcmp()函数原型
#include <stdio.h>
#include <string.h>
#define N 100
void sort(char *p1,char *p2);
int main()
{
	char str1[N],str2[N];
	printf("请输入第一个字符串 ");
	gets(str1);
	printf("请输入第二个字符串 ");
	gets(str2);
	printf("比较前的字符串排序 ");
	printf("%s\t%s\n",str1,str2);
	sort(str1,str2);
	printf("比较后的字符串排序 ");
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