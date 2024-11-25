#include <stdio.h>

int main(void)
	{
	int num;
	int target = 70;
	printf("What is your number?\n");
	scanf("%d", &num);
	if(num == target)
		{
		printf("You are on target\n");
		}
	else if(num < target)
		{
		printf("You are under target\n");
		}
	else
		{
		printf("You are over target\n");
		}
	return 0;
	}
