#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

typedef int ElemType;
typedef struct Stack
{
    ElemType Array[MAX_SIZE];
    int top;
}Stack;

void InitStack(Stack &S)        /* ͨ�����ô��ݵķ�ʽ �����ջS */
{
    S.top=-1;
}

int StackEmpty(Stack S)         /* �ж�ջS�Ƿ�Ϊ�գ���Ϊ�գ��򷵻�1�����򷵻�0 */
{
    return (S.top==-1?1:0);
}

int StackFull(Stack S)          /* �ж�ջS�Ƿ����ˣ������ˣ��򷵻�1�����򷵻�0 */
{
    return (S.top==(MAX_SIZE-1)?1:0);
}

int StackLength(Stack S)        /* ����ջS��Ԫ�ظ��������� */
{
    return (++S.top);
}

int GetTop(Stack S,ElemType &e) /* ջ�ǿ�ʱ��ͨ�� ���ô��� �ķ�ʽ��e����ջ��Ԫ�ص�ֵ */
{
    if(StackEmpty(S))
    {
        printf("ջΪ�գ�ȡֵʧ�ܣ���\n");
        return 0;
    }
    else
    {
        e=S.Array[S.top];
        return 1;
    }
}

int Push(Stack &S,ElemType e)   /* ��ջδ��ʱ��ͨ�� ���ô��� �ķ�ʽ��e��ֵѹ��ջ�� */
{
    if(StackFull(S))
    {    Stack S;
    InitStack(S);
        printf("ջ��������ջʧ�ܣ�1\n");
        return 0;
    }
    else
    {
        S.top++;
        S.Array[S.top]=e;
        return 1;
    }
}

int Pop(Stack &S,ElemType &e)   /* ջ�ǿ�ʱ����ջ��ͨ�� ���ô��ݵķ�ʽ ��e��ȡջ��Ԫ�ص�ֵ */
{
    if(StackEmpty(S))
    {
        printf("ջΪ�գ���ջʧ�ܣ���\n");
        return 0;
    }
    else
    {
        e=S.Array[S.top];
        S.top--;
        return 1;
    }
}

void Convert(int n,int m)       /* �����ת������n�ͽ���ֵm��ͨ������ջ�ķ�ʽ��ת�����ֵ��� */
{
    int flag=1;     /* flagС��0ʱ��ʾ��ת����nΪ���������ʱ���������֮ǰ�����"-"�� */
    Stack S;
    InitStack(S);
    ElemType e;     /* e����ȡ��ջ��Ԫ�ص�ֵ */
    if(n<0)         /* n<0 ʱ��flag��Ϊ�������Ա�����������n���ţ�ʹ�ô洢�������ɴ���0�����㴦�� */
    {
        flag=-1;
        n=-n;
    }
    if(n==0)
    {
        Push(S,0);  /* ȷ����nΪ0ʱҲ���н������������Ľ��Ϊ�� */
    }
    while(n)        /* ��ÿ�δ��������Ϊ0��ʱ������ջ��������� */
    {
        Push(S,n%m);
        n/=m;
    }
    if(flag<0)      /* ��flag����ȷ���Ƿ����"-"�� */
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
    printf("�������ת��������");
    scanf("%d",&n);
    printf("������ת���Ľ��ƣ�");
    scanf("%d",&m);
    while(m<=1 || m>16)
    {
        printf("���벻�Ϸ������������룺");
        scanf("%d",&m);
    }
    Convert(n,m);
    return 0;
}
