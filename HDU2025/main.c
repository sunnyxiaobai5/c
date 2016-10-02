#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char arr[100];
    char max_char;
    while(gets(arr))
    {
        int i=1,j=0;
        max_char=arr[0];

        while(arr[i]!='\0')
        {
            if(arr[i]>max_char)
            {
                max_char=arr[i];
            }
            i++;
        }

        while(arr[j]!='\0')
        {
            putchar(arr[j]);
            if(arr[j]==max_char)
            {
                printf("(max)");
            }
            j++;
        }
        printf("\n");
    }
    return 0;
}
