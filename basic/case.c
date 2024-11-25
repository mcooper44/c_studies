#include <stdio.h>

int main(void)
{
	int option;
	printf("enter option\n");
	scanf("%d", &option);

	switch(option)
	{
		case 1:
			printf("op 1\n");
			break;
		case 2:
			printf("op 2\n");
			break;
		case 3:
			printf("op 3\n");
			break;
		default:
			printf("no op\n");
	}
	return 0;
}

