/* An example of iterating through
 * a string array via a char pointer
 * and incrementing a pointer
 */

#include <stdio.h>

int main(void)
   {
      char *s;
      printf("Enter a word...\n");
      fgets(s, 20, stdin);
      printf("\n");
      while (*s != '\0')
         {
            printf("%c   ", *s);
	    s++;
         }
      printf("\n");
      return 0;
   }
