/* iterating through a char array
 * and using the ternary operator
 * to print 1 or 0 for each alphabetical
 * element in the string array
 */

#include <stdio.h>
#include <string.h>

int alpha_test(char c) {
	int v = (c>='a' && c<='z') || (c >='A' && c <='Z') ? 1 : 0;
	return v;
}

int main(void) {
	char s[] = "Ten Days";
	int len = strlen(s);
	for (int i = 0; i < len; i++)
		{
		alpha_test(s[i]) ? printf("1") : printf("0");
		}
	printf("\n");
	return 0;
}
