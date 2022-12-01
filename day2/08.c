#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* findstr(char* str,char ch)
{
	while(*str)
	{
		if(*str==ch)
			return str;
		str++;
	}
	return NULL;
}


int main()
{
	char str[]="hello world";
	char* p=findstr(str,'e');	
	if(p==NULL)
	{
		printf("未找到\n");	
	}
	else
	{
		printf("%s\n",p);
	}
	return EXIT_SUCCESS;
}
