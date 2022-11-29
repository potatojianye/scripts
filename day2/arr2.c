#include <stdio.h>
//数组长度
int main()
{
	int a[5]={0,4,5,2,1};
	printf("a=%p\n",a);
	printf("&a=%p\n",&a[0]);
	printf("&a=%p\n",&a[4]);
	int n=sizeof(a);
	int n1=sizeof(a[0]);
	printf("%d\n",n);
	printf("%d\n",n1);	
	return 0;
}
