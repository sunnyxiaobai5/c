//�������ո�ϲ�Ϊһ���ո�
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c=0;
    int flag=0;
    for(; (c=getchar())!= EOF; )
    {
        if(!flag)//���ǰһ�����ǿո�
        {
            putchar(c);
            if(c == ' ')//��ǰ����ǿո���flagΪ1
            {
                flag=1;
            }
        }
        else if(c != ' ')//ǰһ���ǿո��ҵ�ǰ������ǿո�
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
