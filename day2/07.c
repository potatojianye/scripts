#include <stdio.h>
#include <stdlib.h>

void my_cat(char* ch1,char* ch2)
{
	int i=0;
	while(*ch1)ch1++;
	while(*ch2)
	{
		*ch1=*ch2;
		ch1++;
		ch2++;
	}
}

int main()
{
	char ch1[100]="potato";
	char ch2[]="jainye";
	my_cat(ch1,ch2);
	printf("%s\n",ch1);
	return 0;
}
