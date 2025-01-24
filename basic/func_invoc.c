// functions can also be passed to other functions

#include <stdio.h>

int func1(void) {
	return 0;
}

int func2(void) {
	return 1;
}

void g(int (*func)(void)) {
	if (func() == 0) {
		printf("function 1\n");
	}
	if (func() == 1) {
		printf("function 2\n");
	}
}

int main(void) {
	g(&func1);
	g(func2);

	return 0;
}

