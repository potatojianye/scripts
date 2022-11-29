#include <stdio.h>

int main()
{
	printf("abc");
	printf("\rdef\n");
	
	printf("abc");
	printf("\bdef\n");

	printf("%d\n",'\123');
	printf("%d\n",'\x23');
	return 0;
}
