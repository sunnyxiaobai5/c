//统计纯单词的个数 只能是纯字母构成的才能当做单词，fdf3df let's 等不能算为单词
#include <stdio.h>
#include <stdlib.h>
#define IN 1
#define OUT 0
#define YES 1
#define NO 0

int main()
{
    int c,state,number,special,cw;
    state = OUT;
    number = NO;
    cw = 0;
    while((c=getchar()) != EOF)
    {
        if(c == ' ' || c == '\n' || c == '\t')
        {
            if(state == IN && number == NO && special == NO)
            {
                cw++;
            }
            else
            {
                number = NO;
            }
            state = OUT;
            special = NO;
        }
        else if(c >= '0' && c <= '9')
        {
            number = YES;
        }
        else if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            state = IN;
        }
        else
        {
            special = YES;
        }
    }
    printf("%d",cw);
    return 0;
}
