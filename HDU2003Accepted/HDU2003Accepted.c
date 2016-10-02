#include <stdio.h>
#include <math.h>
int main()
{
  double x;
  while(scanf("%lf",&x)!=EOF)
  {
    printf("%.2lf\n",fabs(x));
  } 
  return 0;
}
//注：在HDU上x类型为double才能Accepted，float会Wrong Answer
