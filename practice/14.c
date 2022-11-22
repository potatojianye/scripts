#include <stdio.h>
//将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5
int main()
{
	int i=2,num;
	printf("input a num:");
	scanf("%d",&num);
	for(i=2;i<=num;i++)
	{
		while (num!=i)
		{
			if(num%i==0)
			{	printf("%d*",i);
				num=num/i;
			}
			else
				break;
		}		
	}
	printf("%d\n",num);
	return 0;
}
