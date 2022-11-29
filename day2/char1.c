#include <stdio.h>
//字符串初始化
int main()
{
	char buf[]={'a','b','c'};
	printf("%s\n",buf);
	
	char buf1[100]={'a','b','c'};
	printf("%s\n",buf1);

	char buf2[]={'a','b','c','\0'};
	printf("%s\n",buf2);

	char buf3[]={'a','b','c','\0','e'};
	printf("%s\n",buf3);

	char buf4[]="abce";
	printf("%s\n",buf4);
	
	char buf5[]="\012abce";
	printf("%s\n",buf5);
	return 0;
}
