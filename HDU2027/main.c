#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        char a[100]={'\0'};
        int c[5]={0};
        int i=0;
        gets(a);
        while(a[i])
        {
            switch(a[i])
            {
                case 'a':c[0]++;break;
                case 'e':c[1]++;break;
                case 'i':c[2]++;break;
                case 'o':c[3]++;break;
                case 'u':c[4]++;break;
            }
            i++;
        }
        printf("a:%d\n",c[0]);
        printf("e:%d\n",c[1]);
        printf("i:%d\n",c[2]);
        printf("o:%d\n",c[3]);
        printf("u:%d\n",c[4]);
        if(n>0)
            printf("\n");
    }

    return 0;
}
