#include <stdio.h>

int main()
{
	short a = 10;
	int b = 10;
	long c = 10l;
	long long d = 10ll;
	printf("%u\n",sizeof(a));
	printf("%u\n",sizeof(b));
	printf("%u\n",sizeof(c));
	printf("%u\n",sizeof(d));
	
	unsigned short a2 = 20u;
	printf("unsigned short a2=%hu\n",a2);
	return 0; 
}
