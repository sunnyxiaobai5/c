#include <stdio.h>
#include <math.h>
#define ROW 50
#define COL 5

void input(double arr[ROW][COL],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%lf",&arr[i][j]);
        }
    }
}
void output(double arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            printf("%.2lf",arr[i]);
        }
        else
        {
            printf(" %.2lf",arr[i]);
        }
    }
    printf("\n");
}
int process(double arr[ROW][COL],double stu_avg[],double class_avg[],int m,int n)
{
	int i,j,num,flag;
	double sum;
	for(i=0;i<m;i++)
	{
		sum=0;
		for(j=0;j<n;j++)
		{
			sum+=arr[i][j];
		}
		stu_avg[i]=sum/n;
	}
	for(j=0;j<n;j++)
	{
		sum=0;
		for(i=0;i<m;i++)
		{
			sum+=arr[i][j];
		}
		class_avg[j]=sum/m;
	}
	for(num=0,i=0;i<m;i++)
	{
		flag=1;
		for(j=0;j<n;j++)
		{
			if(arr[i][j]<class_avg[j])
			{
				flag=0;
			}
		}
		num+=flag;
	}
	return num;
}

int main()
{
	int m,n,num;//m个学生，n们课程
	double arr[ROW][COL],stu_avg[ROW],class_avg[COL];//学生平均成绩和科目平均成绩
	while(scanf("%d%d",&m,&n)!=EOF)
    {
		input(arr,m,n);
		num=process(arr,stu_avg,class_avg,m,n);
		output(stu_avg,m);
		output(class_avg,n);
		printf("%d\n\n",num);
	}
	return 0;
}
