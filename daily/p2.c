#include <stdio.h>
//指针操作数组元素
int main()
{
	int a[]={1,2,3,4,5,6};
	int i,j;
	int k=0;
	int n=sizeof(a)/sizeof(a[0]);
	for(i=0;i<n;i++)
	{
		//printf("%d\n",a[i]);
		printf("%d\n",*(a+i));
	}
	int* p;
	p=a;
	for(j=0;j<n;j++)
	{
		printf("%d\n",*(p+j));
	}
	int* p1;
	p1=a;
	while(k<n)
	{
		printf("%d\n",*p1);
		p1++;
		k++;
	}
	return 0;
}
