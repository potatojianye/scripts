#include <stdio.h>
//打印出所有的“水仙花数”，所谓“水仙花数”是指一个三位数，其各位数字立方和等于该数

int main()
{
	int i,j,k;
	for (i=0;i<9;i++)
	{
		for (j=0;j<=9;j++)
		{
			for (k=0;k<=9;k++)
			{
				if (i*i*i+j*j*j+k*k*k==100*i+10*j+k)
					printf("%d\n",100*i+10*j+k);
			}
		}
	}
		
}
