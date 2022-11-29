#include <stdio.h>

int main()
{
 	int a;
	int b = sizeof(a);
	printf("a字节=%d\n",b);
	size_t c = sizeof("a");
	printf("wufuhao a=%d\n",c);
	return 0;
}
