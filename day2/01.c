#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
//指针和数组
int main0()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int* p=arr;
//	printf("%p\n",p);
//	printf("%p\n",arr);

//	p++;	
//	printf("%d\n",*p);
	
	int i;
	for(i=0;i<10;i++)
	{
//		printf("%d\n",arr[i]);
//		printf("%d\n",*(p+i));
//		printf("%d\n",*(arr+i));
//		printf("%d\n",p[i]);
		printf("%d\n",*p++);
	}
	
	int step=p-arr;
	printf("%d\n",step);

	return EXIT_SUCCESS;
}

void bubblesort(int* arr,int len)
{
	int i,j;
	for(i=0;i<len-1;i++)
	{
		for(j=0;j<len-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}		
		}
	}	
}

int main()
{
	int arr[]={3,5,8,1,2,4,50,34,98,43,23,1};
	bubblesort(arr,12);
	int i;
	for(i=0;i<12;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
