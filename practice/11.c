#include <stdio.h>
//兔子问题
int main()
{
	int f1=1,f2=1;
	int i;	
	printf("第1个月兔子数量=%d\n",f1);
	printf("第2个月兔子数量=%d\n",f2);
	for(i=0;i<20;i=i+2)
	{
		f1=f1+f2;
		f2=f1+f2;
		printf("第%d个月兔子数量=%d\n",i+3,f1);
		printf("第%d个月兔子数量=%d\n",i+4,f2);
	}
	return 0;
}
