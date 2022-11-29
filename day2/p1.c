#include <stdio.h>
//指针
int main()
{
	int a=10;
	int b=20;
	printf("a=%d,b=%d\n",a,b);
	int *p;
	p=&a;
	printf("*p=%d\n",*p);
	
	int *p1=&a;
	*p1=100;
	printf("a=%d\n",a);

	int* p2;
	printf("sizeof(p2)=%d\n",sizeof(p2));
	return 0;
} 
