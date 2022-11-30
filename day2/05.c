#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//指针与函数
void swap1(int a,int b)
{
	int temp;
	temp=b;
	b=a;
	a=temp;	
}
void swap2(int* a,int* b)
{
	int temp;
	temp=*b;
	*b=*a;
	*a=temp;
}


int main()
{
	int a=10;	
	int b=20;
	swap1(a,b);
	printf("a=%d,b=%d\n",a,b);	
	swap2(&a,&b);
	printf("a=%d,b=%d\n",a,b);	
	return 0;
}
