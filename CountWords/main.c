//统计输入的 字符个数，单词个数，其他字符个数
#include <stdio.h>
#include <stdlib.h>
#define IN 0
#define OUT 1

int main()
{
    int c,nc,nw,nl,state;
    state = OUT;
    nc = nw = nl = 0;
    while((c=getchar()) != EOF)
    {
        if(c == '\n')
        {
            nl++;
        }
        if(c != ' ' && c != '\t' && c != '\n')
        {
            nc++;
            if(state == OUT)
            {
                state = IN;
                nw++;
            }
        }
        else
        {
            state = OUT;
        }
    }
    printf("words:%d\n",nw);
    printf("char:%d\n",nc);
    printf("line:%d\n",nl);
    return 0;
}
