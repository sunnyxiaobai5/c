#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,j,flag;
    char a[50];
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        flag=1;
        j=1;
        gets(a);
        if(!((a[0]>='a' && a[0]<='z') || (a[0]>='A' && a[0]<='Z') || a[0]=='_'))
        {
            printf("no\n");
            continue;
        }
        while(j<strlen(a))
        {
            if(!((a[j]>='a' && a[j]<='z') || (a[j]>='A' && a[j]<='Z') || (a[j]>='0' && a[j]<='9') || a[j]=='_'))
            {
                flag=0;
                break;
            }
            j++;
        }
        if(flag)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
