#include <stdio.h>

int main()
{
	int a = 100;
	printf("%d\n",a);
	printf("%p\n",&a);
	printf("%%d\n");
	
	char c = 'a';
	putchar(c);
	long a2 = 100;	
	printf("%ld,%lx,%lo\n",a2,a2,a2);
	long long a3 = 10000;
	printf("%lld,%llx,%llo\n",a3,a3,a3);
	int abc = 10;	
	printf("%6d\n",abc);
	printf("%-6d\n",abc);
	printf("%06d\n",abc);
	printf("%-06d\n",abc);
	double d = 12.3;	
	printf("\'%-10lf\'\n",d);
	return 0;
}
