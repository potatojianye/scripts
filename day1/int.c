#include<stdio.h>

int main()
{
	int a = 123;
	int b = 0567;
	int c = 0xabc;
	printf("a=%d\n",a);
	printf("b=%o\n",b);
	printf("b=%x\n",b);
	printf("c=%x\n",c);
	printf("c=%X\n",c);
	printf("c=%d\n",c);
	unsigned int d = 0xffffffff;
	printf("d=%u\n",d);
	return 0;
}
