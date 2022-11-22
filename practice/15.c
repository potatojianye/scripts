#include <stdio.h>

int main()
{
	int score;
	char grade;
	printf("input the score:");
	scanf("%d",&score);
	grade=score>=90?'A':(score>=60?'B':'C');
	printf("%d is %c\n",score,grade);
	return 0;
}
