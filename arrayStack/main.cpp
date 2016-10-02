#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

typedef int ElemType;
typedef struct Stack
{
    ElemType Array[MAX_SIZE];
    int top;
}Stack;

void InitStack(Stack &S)        /* 通过引用传递的方式 构造空栈S */
{
    S.top=-1;
}

int StackEmpty(Stack S)         /* 判断栈S是否为空，若为空，则返回1，否则返回0 */
{
    return (S.top==-1?1:0);
}

int StackFull(Stack S)          /* 判断栈S是否满了，若满了，则返回1，否则返回0 */
{
    return (S.top==(MAX_SIZE-1)?1:0);
}

int StackLength(Stack S)        /* 返回栈S的元素个数即长度 */
{
    return (++S.top);
}

int GetTop(Stack S,ElemType &e) /* 栈非空时，通过 引用传递 的方式用e返回栈顶元素的值 */
{
    if(StackEmpty(S))
    {
        printf("栈为空，取值失败！！\n");
        return 0;
    }
    else
    {
        e=S.Array[S.top];
        return 1;
    }
}

int Push(Stack &S,ElemType e)   /* 当栈未满时，通过 引用传递 的方式将e的值压入栈中 */
{
    if(StackFull(S))
    {    Stack S;
    InitStack(S);
        printf("栈已满，入栈失败！1\n");
        return 0;
    }
    else
    {
        S.top++;
        S.Array[S.top]=e;
        return 1;
    }
}

int Pop(Stack &S,ElemType &e)   /* 栈非空时，出栈并通过 引用传递的方式 用e获取栈顶元素的值 */
{
    if(StackEmpty(S))
    {
        printf("栈为空，出栈失败！！\n");
        return 0;
    }
    else
    {
        e=S.Array[S.top];
        S.top--;
        return 1;
    }
}

void Convert(int n,int m)       /* 传入待转换的数n和进制值m，通过数组栈的方式将转换后的值输出 */
{
    int flag=1;     /* flag小于0时表示待转换的n为负数，输出时在所有输出之前先输出"-"号 */
    Stack S;
    InitStack(S);
    ElemType e;     /* e用于取出栈顶元素的值 */
    if(n<0)         /* n<0 时将flag置为负数，以便控制输出，将n反号，使得存储的数依旧大于0，方便处理 */
    {
        flag=-1;
        n=-n;
    }
    if(n==0)
    {
        Push(S,0);  /* 确保当n为0时也能有结果，否则输出的结果为空 */
    }
    while(n)        /* 当每次处理的数不为0的时候，则入栈，否则结束 */
    {
        Push(S,n%m);
        n/=m;
    }
    if(flag<0)      /* 由flag符号确定是否输出"-"号 */
    {
        printf("-");
    }
    while(!StackEmpty(S))
    {
        Pop(S,e);
        if(e>=10)
        {
            switch(e)
            {
                case 10:printf("A");break;
                case 11:printf("B");break;
                case 12:printf("C");break;
                case 13:printf("D");break;
                case 14:printf("E");break;
                case 15:printf("F");break;
            }
        }
        else
        {
            printf("%d",e);
        }
    }
}

int main()
{
    int n,m;
    printf("请输入待转换的数：");
    scanf("%d",&n);
    printf("请输入转换的进制：");
    scanf("%d",&m);
    while(m<=1 || m>16)
    {
        printf("输入不合法，请重新输入：");
        scanf("%d",&m);
    }
    Convert(n,m);
    return 0;
}
