/***************************************************************************
需三种规格的钢材 2.9m,2.1m,1.5m,各一根构成一套，原料定长为7.4m。需一百套
可由回溯法求出每根原料所有的切割方式如下
        1   2   3   4   5   6   7   8
2.9m    2   1   1   1   0   0   0   0
2.1m    0   2   1   0   3   2   1   0
1.5m    1   0   1   3   0   2   3   4
解此题的关键在于各种切割方式的选用次数如何搭配
****************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#define LOOP1 100
#define LOOP2 100
#define LOOP3 100
#define LOOP4 100
#define LOOP5 34
#define LOOP6 50
#define LOOP7 100
#define LOOP8 25
#define MAXLOOP 91
void getNum()
{
    int i,j,k,l,m,n,o,p;
    for(i = MAXLOOP; i >= 0; i--)
    {
        for(j = MAXLOOP-i; j >= 0; j--)
        {
            k=l=m=n=o=p=0;
            if((i*2+j) > 100 && (j*2) > 100 && i > 100)
            {
                printf("%d,%d,%d,%d,%d,%d,%d,%d:%d根\n",i,j,k,l,m,n,o,p,i+j);
                continue;
            }

            for(k = MAXLOOP-i-j; k >= 0; k--)
            {
                l=m=n=o=p=0;
                if((i*2+j+k) > 100 && (j*2+k) > 100 && (i+k) > 100)
                {
                    printf("%d,%d,%d,%d,%d,%d,%d,%d:%d根\n",i,j,k,l,m,n,o,p,i+j+k);
                    continue;
                }

                for(l = MAXLOOP-i-j-k; l >= 0; l--)
                {
                    m=n=o=p=0;
                    if((i*2+j+k+l) > 100 && (j*2+k) > 100 && (i+k+l*3) > 100)
                    {
                        printf("%d,%d,%d,%d,%d,%d,%d,%d:%d根\n",i,j,k,l,m,n,o,p,i+j+k+l);
                        continue;
                    }

                    for(m = MAXLOOP-i-j-k-l; m >= 0; m--)
                    {
                        n=o=p=0;
                        if((i*2+j+k+l) > 100 && (j*2+k+m*3) > 100 && (i+k+l*3) > 100)
                        {
                            printf("%d,%d,%d,%d,%d,%d,%d,%d:%d根\n",i,j,k,l,m,n,o,p,i+j+k+l+m);
                            continue;
                        }

                        for(n = MAXLOOP-i-j-k-l-m; n >= 0; n--)
                        {
                            o=p=0;
                            if((i*2+j+k+l) > 100 && (j*2+k+m*3+n*2) > 100 && (i+k+l*3+n*2) > 100)
                            {
                                printf("%d,%d,%d,%d,%d,%d,%d,%d:%d根\n",i,j,k,l,m,n,o,p,i+j+k+l+m+n);
                                continue;
                            }

                            for(o = MAXLOOP-i-j-k-l-m-n; o >= 0; o--)
                            {
                                p=0;
                                if((i*2+j+k+l) > 100 && (j*2+k+m*3+n*2+o) > 100 && (i+k+l*3+n*2+o*3) > 100)
                                {
                                    printf("%d,%d,%d,%d,%d,%d,%d,%d:%d根\n",i,j,k,l,m,n,o,p,i+j+k+l+m+n+o);
                                    continue;
                                }

                                for(p = MAXLOOP-i-j-k-l-m-n-o; p >= 0; p--)
                                {
                                    if((i*2+j+k+l) > 100 && (j*2+k+m*3+n*2+o) > 100 && (i+k+l*3+n*2+o*3+p*4) > 100)
                                    {
                                        printf("%d,%d,%d,%d,%d,%d,%d,%d:%d根\n",i,j,k,l,m,n,o,p,i+j+k+l+m+n+o+p);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
int main()
{
    getNum();
    return 0;
}
