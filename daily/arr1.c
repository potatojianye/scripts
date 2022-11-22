#include <stdio.h>
int main()
{
	int arr[]={3,2,6,78,9,7,5};
	int i;
	for (i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
	{
		printf("%d\n",arr[i]);	
	}
	return 0;
}
