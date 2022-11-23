#include <stdio.h>
//数组长度
int main()
{
	int a[5]={0};
	printf("a=%p\n",a);
	printf("&a=%p\n",&a[0]);
	printf("&a=%p\n",&a[4]);
	
	return 0;
}
