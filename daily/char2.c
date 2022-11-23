#include <stdio.h>
//字符串追加
int main()
{
	char char1[]="abc";
	char char2[]="123";
	char char3[100];
	int i=0;	
	while(char1[i]!=0)
	{
		char3[i]=char1[i];
		i++;
	}
	int j=0;
	while(char2[j]!=0)
	{
		char3[i+j]=char2[j];
		j++;
	}
	char3[i+j]=0;
	printf("%s\n",char3);
	return 0;
}
