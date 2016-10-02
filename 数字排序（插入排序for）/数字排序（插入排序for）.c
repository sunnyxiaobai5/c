/*
插入排序：内部比较循环用for循环
*/
#include <stdio.h>
void insertsort(int *,int);
void main()
{
	int arr[10]={12,4,76,78,90,887,2,1,56,7};
	insertsort(arr,10);
}
void insertsort(int * array,int n)
{
	int i,j,k,temp;
	for(i=1;i<n;i++)
	{
		temp=array[i];
		for(j=i-1;array[j]>temp && j>=0;j--)
		{
			array[j+1]=array[j];
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