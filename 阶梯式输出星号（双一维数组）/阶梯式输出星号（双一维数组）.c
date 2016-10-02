#include <stdio.h>
#define	N 5
void main()
{
	int i,j,k;
	char a[N]={'*','*','*','*','*'};
	char b[2*N]={' ',' ',' ',' ',' ',' ',' ',' '};
	for(i=0;i<N;i++)
	{
		for(k=0;k<i*2;k++)
			printf("%c",b[j]);
		for(j=0;j<N;j++)
			printf("%c",a[i]);
		printf("\n");
	}
}