#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//有个数组，找出第二大的数，并且打印出来（使用*操作数组元素个数，不要使用[]）
//	int a[] = {5,100,32,45,21,67,32,68,41,99,13,71};


void bubblesort(char* ch,int len)
{
	int i=0;
	int j=0;
	int temp;
	for(i=0;i<len-1;i++)
	{
		for(j=0;j<len-1-i;j++)
		{
			if(*(ch+j)>*(ch+j+1))
			{
				temp=*(ch+j);
				*(ch+j)=*(ch+j+1);
				*(ch+j+1)=temp;	
			}	
		}
	}		
}

int main()
{
	char ch[]={5,100,32,45,21,67,32,68,41,99,13,71};
	int len=sizeof(ch);
	bubblesort(ch,len);
	printf("%d\n",ch[1]);	
}
