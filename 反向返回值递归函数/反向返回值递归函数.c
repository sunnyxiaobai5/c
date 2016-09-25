//µÝ¹éº¯Êýµ÷ÓÃ
#include <stdio.h>
void conversation(int a);
int main()
{
	int c;
	scanf("%d",&c);
	conversation(c);
	return 0;
}
void conversation(int a)
{
	if(!a)
	return;
	conversation(a/8);
	printf("%d\n",a%8);
	return;
}