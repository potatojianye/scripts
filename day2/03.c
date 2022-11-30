#define _CRT_SECURT_NOWARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//指针数组
int main(void)
{
	int a[]={1,2,3};
	int b[]={4,5,6};
	int c[]={7,8,9};
	int i,j;
	int* arr[]={a,b,c};
	int** p=arr;
//	printf("%d\n",**p);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		//	printf("%d",arr[i][j]);
			printf("%d",*(*(p+i)+j));
		}
		puts("");
	}
	return 0;
}
