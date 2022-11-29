#include <stdio.h>

int main()
{
	float a = 3.14f;
	double b = 3.14;
	printf("a=%f\n",a);
	printf("b=%lf\n",b);
		
	float a2 = 3e3f;
	float b2 = 3e-4f;
	printf("%f\n",a2);
	printf("%f\n",b2);
	
	float a1 = 1234567890.1415926537f;//float有效数字6-7,之后的数字就会乱
	double b1 = 1234567890.1415926537;
	printf("%f\n",a1);
	printf("%lf\n",b1);
	return 0;
	
}
