#include <stdio.h>


int addInt(int a, int m) {
	return a + m;
}

int shiftInt(int i, int s) {
	return i << s;
}

int add4to4(int (*funcPtr)(int,int)) {
	return (*funcPtr)(2,3);
}

int shift1by3(int (*funcPtr)(int,int)) {
	return (*funcPtr)(1,3);
}


int main() {
	int (*functionPtrA)(int,int);
	int (*functionPtrB)(int,int); 
	
	functionPtrA = &addInt;
	functionPtrB = &shiftInt;

	int A = add4to4(*functionPtrA);
	int B = shift1by3(*functionPtrB);
	int C = (*functionPtrA)(10,10);

	printf("A = %d\n", A);
	printf("B = %d\n", B);
	printf("C = %d\n", C);
	printf("A = %d\n", A);
	return 0;
}

