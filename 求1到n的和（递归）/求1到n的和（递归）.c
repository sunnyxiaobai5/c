#include <stdio.h>
void main()
{
	int plus(int);
	int a,sum;
	printf("此程序求1~n的和，请输入你的n值:");
	scanf("%d",&a);
	sum=plus(a);
	printf("1+2+3+···+n=%d\n",sum);
}
int plus(int n)
{
	int s;
	if(n==1)
		s=1;
	else
		s=plus(n-1)+n;
	return s;
}