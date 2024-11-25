/* accept integer input and output the
 * value in hex
 */

#include <stdio.h>

int main(void) {
	int num;
	scanf("%d", &num);
	printf("0x%x\n", num);
	return 0;
}
