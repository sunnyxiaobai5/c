//�˳���ͨ���ݹ齫����ת�����ַ����������������ԭ�������
#include <stdio.h>
void ex(int );
int main()
{
	int x;
	printf("��������Ҫת�����ַ���������:");
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