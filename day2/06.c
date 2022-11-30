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


int main()
{
	char ch[]="po hia dw dew";
	remove_space(ch);
	printf("%s\n",ch);
	return 0;
}
