#include <stdio.h>
//有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
int main()
{
	int i;
	int j;
	int k;
	for (i=1;i<=4;i++)
	{
		for (j=1;j<=4;j++)
		{
			for (k=1;k<=4;k++)
			{
				if (i!=j && i!=k && j!=k)
			 		printf("%d%d%d\n",i,j,k);
			}	
		}
	}
	return 0;
}

