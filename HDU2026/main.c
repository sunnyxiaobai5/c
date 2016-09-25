#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i;
    char a[100];
    while(gets(a))
    {
        int neww=0;
        for(i=0;a[i]!='\0';i++)
        {
            if(!((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z')))
            {
                neww=0;
            }
            if(!neww && ((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z')))
            {
                a[i]-=32;
                neww=1;
            }
            putchar(a[i]);
        }
        printf("\n");
    }

    return 0;
}
