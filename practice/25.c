#include <stdio.h>
//求1+2!+3!+...+20!的和
int main()
{
	float i,sum=0,tmp=1;
	for(i=1;i<=20;i++)
	{
		tmp=tmp*i;
		sum=sum+tmp;
			
	}
	printf("sum=%d\n",sum);
	return 0;	
}
