#include <stdio.h>
int main()
{
	float money,salary;
	scanf("%f",&money);
	if(money<=100000)
	{
		salary=money*0.1;
	}
	else if(100000<money<=200000)
	{
		salary=100000*0.1+(money-100000)*0.075;
	}
	printf("salary=%f\n",salary);
	return 0;
}
