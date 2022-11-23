#include <stdio.h>
//冒泡排序
int main()
{
	int i,j,n,temp;
	int arr[10]={2,-4,5,1,9,-8,0,-10,3,7};
	n=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
