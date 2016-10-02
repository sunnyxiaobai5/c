//此程序通过递归将整数转换成字符串。并按照输入的原样输出。
#include <stdio.h>
void ex(int );
int main()
{
	int x;
	printf("请输入你要转换成字符串的数字:");
	scanf("%d",&x);
	ex(x);
	printf("\n");
	return 0;
}
void ex(int p)
{
	if(p==0) return;
	else
	ex(p/10);
	printf("%c",(p%10)+'0');
}