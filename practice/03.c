#include <stdio.h>
#include <math.h>
//#include <conio.h>
//一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
//编译时需要加-lm选项连接数学库：gcc -lm 03.c -o 03.sh
int main()
{
	int i,x,y;
	for(i=1;i<=100000;i++)
	{
		x=sqrt(i+100);
		y=sqrt(i+268);
		if(x*x==i+100&&y*y==i+268)
			printf("i=%d\n",i);			
	}
	return 0;
}
