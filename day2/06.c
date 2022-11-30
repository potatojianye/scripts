#include <stdio.h>
#include <stdlib.h>

void remove_space(char* ch)
{
	char str[100]={0};
	char *temp=str;
	int i=0;
	int j=0;
	while(ch[i]!='\0')
	{
		if(ch[i]!=' ')
		{
			str[j]=ch[i];
			j++;
		}
		i++;
	}
	while(*ch++=*temp++);
}
void remove_space1(char* ch)
{
	char* ftemp=ch;
	char* rtemp=ch;
	while(*ftemp!='\0')
	{
		if(*ftemp!=' ')
		{
			*rtemp=*ftemp;
			rtemp++;
		}
		ftemp++;
	}
	*rtemp=0;
}

int main()
{
	char ch[]="po hia dw dew";
	remove_space1(ch);
	printf("%s\n",ch);
	return 0;
}
