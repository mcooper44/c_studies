#include <stdio.h>

int main(void)
{
	int counter;
	unsigned long int a = 1;

	for(counter=1; counter <=20; counter++)
	{
		a += (a * counter);
		printf("%lu\n", a);
	}
	return 0;
}
