//将连续空格合并为一个空格
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c=0;
    int flag=0;
    for(; (c=getchar())!= EOF; )
    {
        if(!flag)//如果前一个不是空格
        {
            putchar(c);
            if(c == ' ')//当前这个是空格，置flag为1
            {
                flag=1;
            }
        }
        else if(c != ' ')//前一个是空格并且当前这个不是空格
        {
            putchar(c);
            flag=0;
        }
        else
        {
            flag=1;
        }
    }
    return 0;
}
