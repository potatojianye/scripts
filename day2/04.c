#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//多级指针
////二级指针加偏移量 相当于跳过了一个一维数组大小
////一级指针加偏移量 相当于跳过了一个元素
int main()
{
	int a[] = { 1,2,3 };
	int b[] = { 4,5,6 };
	int c[] = { 7,8,9 };
	int* arr[]={a,b,c};
	int** p=arr;
	printf("%d",*(*(p+1)+1));
	puts("");
	return 0;
}
