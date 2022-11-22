#include <stdio.h>
//有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和
int main()
{
	int i,t;
	float a=1,b=2;
	float s=0;
	for(i=0;i<20;i++)
	{
		s=s+b/a;
		t=b;b=a+b;a=t;				
	}
	printf("%9.6f\n",s);
	return 0;
}

