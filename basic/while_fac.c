#include <stdio.h>

unsigned long rec_f(unsigned long n)
	{
	unsigned long f = 1;
	while(n)
		f *= n--;
	return f;
	}

int main(void)
{
	unsigned long num = 5;
	unsigned long fact;
	fact = rec_f(num);
	printf("%lu\n", fact);
	return 0;
}


