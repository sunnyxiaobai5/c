#include <stdio.h>
void main()
{
	char c;
	int x=0,y=0,z=0,w=0;
	printf("�����룺");
	while((c=getchar())!='\n')
	{
		if((c>='a' && c<='z')||(c>='A' && c<='Z'))
			x++;
		else if(c==32)
			y++;
		else if(c>='0' && c<='9')
			z++;
		else
			w++;
	}
	printf("��ĸ����%d���ո����%d�����ָ���%d������%d\n",x,y,z,w);
}