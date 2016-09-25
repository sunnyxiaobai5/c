/*
插入排序：内部比较循环用while循环
*/
#include <stdio.h>
void insertsort(int *,int n);
void main()
{
	int a[10]={23,1,45,56,8,9,34,567,0,12};
	insertsort(a,10);
}
void insertsort(int * array,int n)
{
	int i,j,k,temp;
	for(i=1;i<n;i++)
	{
		j=i-1;
		temp=array[i];
		while(temp<array[j] && j>=0) 
		{
			array[j+1]=array[j];
			j--;
		}
		array[j+1]=temp;
		for(k=0;k<n;k++)
		{
		printf("%d\t",array[k]);
		}
	}
	printf("\n");
	for(k=0;k<n;k++)//输出最终结果
	{
		printf("%d\t",array[k]);
	}
}