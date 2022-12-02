#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//字符串查找字符串

char* strfind(char* str,char* dest)
{
	char* fstr=str;
	char* rstr=str;
	char* tdest=dest;
	while(*fstr)
	{
		rstr=fstr;
		while(*fstr==*tdest && *fstr!='\0')
		{
			fstr++;
			tdest++;
		}
		if(*tdest=='\0')
		{
			return rstr;
		}
		fstr=rstr;
		tdest=dest;
		fstr++;
	}
	return NULL;
}

int main()
{
	char str[]="potato jianye";
	char dest[]="an";
	char* p=strfind(str,dest);
	printf("%s\n",p);
	return 0;
}
