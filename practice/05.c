#include <stdio.h>
//输入三个整数x,y,z，请把这三个数由小到大输出。
int main()
{
	int x,y,z,max;
	printf("input num x,y,z");
	scanf("%d%d%d",&x,&y,&z);
	if (x>=y)
	{
		max=x;
	}
	else
	{
		max=y;	
	}
	if(max>=z)
	{
		printf("max=%d\n",max);
	}
	else
	{
		printf("max=%d\n",z);
	}
	return 0;	
}
