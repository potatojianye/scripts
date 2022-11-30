#define _CRT_SECURE_NOWARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//指针运算


my_copy(char* ch,char* dest)
{
	int i=0;
//	while(ch[i]!='\0')
	while(ch[i])
	{
		dest[i]=ch[i];
		i++;
	}
	dest[i]=0;
}







int main()
{
	char ch[]="my scripts";
	char dest[100];
	my_copy(ch,dest);
	printf("%s\n",dest);
	return 0;
}
