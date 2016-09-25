#include <stdio.h>
#include <string.h>
char stringcat(char,char);
int main()
{
	char a1[100],a2[100];
	gets(a1);
	gets(a2);
	stringcat(a1,a2);
	printf("%s\n",a1);
	return 0;
}	
char stringcat(char *x,char *y)
{
	int b,i,j;
	for(b=0;x[b]!='\0';b++); 
	for(i=b,j=0;i<100;i++,j++)
	{
		x[i]=y[j];
	}
	return 0;
}
