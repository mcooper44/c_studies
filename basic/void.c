#include <stdio.h>

int main(void){
	void *pointer;
	int number = 54;
	pointer = &number;

	printf("The value of number = %d\n ", *(int *)pointer);
	return 0;
}
