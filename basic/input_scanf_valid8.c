/* a simple and fragile method of validating input
 * via scanf - checks to see fi return value from
 * scanf is a 1 (success) or 0 (invald match of %format)
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
   {
      int n;
      printf("Enter an int: ");
      if (scanf("%d", &n) !=1)
         {
	   printf("Error: Invalid Input\n");
	   exit(1);
	 }
      else
         {
	    printf("You entered: %d\n", n);
	 }
      return 0;
   }

