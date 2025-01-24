#include <stdio.h>

int main(void)
	{
		int count, n;
		printf("*** Mixed Data *** \n\n");
		printf("Type integers, EOF to end the loop   ");
		count = 0;
		while ((scanf("%d", &n) != EOF) && (count < 4))
		{
			printf("n = %d\n", n);

			count ++;
			printf("Type integers, EOF to end the loop   ");
		}
		return 0;
	}
