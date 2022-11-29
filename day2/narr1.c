#include <stdio.h>
//二维数组定义与使用
int main()
{
	int arr[3][4];
	int i,j;
	int num=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			arr[i][j]=num++;
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\n",arr[i][j]);
		}
	}
}
