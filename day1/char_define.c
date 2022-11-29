#include <stdio.h>

int main()
{
	char ch = 'a';
	printf("%u\n",sizeof(ch));//每个字符占用一个字节
	printf("%c\n",ch);
	printf("%d\n",ch);

	char A = 'A';
	char a = 'a';
	printf("%d\n",a); 	
	printf("%d\n",A); 	
	
	printf("%d\n",'a'-32);
	printf("%d\n",'A'+32);

	ch=' ';
	printf("%d\n",ch);
	return 0;
}
