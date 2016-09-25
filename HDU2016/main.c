#include <stdio.h>
#define NUM 100

int main()
{
	int number,min,i,j,a[NUM],temp;
    while(scanf("%d",&number))
    {
        if(number==0)
            break;
        for(i=0;i<number;i++)
        {
            scanf("%d",&a[i]);
            if(i==0)
            {
                min=i;
            }
            else
            {
                if(a[i]<a[min])
                min=i;
            }
        }
        temp=a[min];
        a[min]=a[0];
        a[0]=temp;
        for(j=0;j<number;j++)
        {
            if(j==0)
            {
                printf("%d",a[j]);
            }
            else
            {
                printf(" %d",a[j]);
            }

        }
        printf("\n");
    }

	return 0;
}
