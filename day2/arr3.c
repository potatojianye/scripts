#include <stdio.h>
//数组逆置
int main()
{
	int i,j,temp;
	int arr[8]={1,2,3,4,5,6,7,8};
	i=0;
	j=sizeof(arr)/sizeof(arr[0])-1;
	while(i<j)
	{
		temp=arr[j];
		arr[j]=arr[i];
		arr[i]=temp;
		i++;
		j--;
	}
	for(i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
