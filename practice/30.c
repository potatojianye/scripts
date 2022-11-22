#include <stdio.h>
//一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同
int main()
{
	long num,ge,shi,bai,qian,wan;
	printf("intput the num:");
	scanf("%ld",&num);
	wan=num/10000;
	qian=num%10000/1000;
	bai=num%1000/100;
	shi=num%100/10;
	ge=num%10;
	if(ge==wan && qian==shi)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	
}
