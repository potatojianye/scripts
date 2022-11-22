#include <stdio.h>
#define N 10
//：将一个数组逆序输出。
int main()
{
	int arr[N]={3,5,7,1,2,9,0,4,8,6};
	int i,tmp;
	for(i=0;i<5;i++)
	{
		tmp=arr[i];
		arr[i]=arr[N-1-i];
		arr[N-1-i]=tmp;		
	}
	for (i=0;i<N;i++)
		printf("arr=%d\n",arr[i]);
	return 0;	
	
}
