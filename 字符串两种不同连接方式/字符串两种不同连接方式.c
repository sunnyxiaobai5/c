#include <stdio.h>
#include <string.h>
void main()
{
	int b,i,j;
	char a1[30]={"welcome "},a2[]={"hello world!"};
	b=strlen(a1);
	for(i=b,j=0;i<30;i++,j++)
	{
		a1[i]=a2[j];
	}
	printf("%s\n",a1);
}
/*
#include <stdio.h>
#include <string.h>
void main()
{
	char a1[30]={"welcome "},a2[]={"hello world!"};
    printf("%s\n",strcat(a1,a2));
}
*/