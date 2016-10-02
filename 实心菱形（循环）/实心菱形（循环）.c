#include <stdio.h>
#define N 15

void main()
{
	int i,j,k,l,m,n;
	for(i=0;i<N;i++)
	{
  		for(j=N;j>i;j--)
			printf("  ");
		for(k=0;k<=i;k++)
			printf("*   ");
		printf("\n");
	}

	for(n=0;n<=N;n++)
    {
		for(l=N;l>N-n;l--)
			printf("  ");
		for(m=0;m<=N-n;m++)
			printf("*   ");
		printf("\n");
	}
}