/* using ctype to parse input and determine
 * what the input is - this could be done better
 */


#include <stdio.h>
#include <ctype.h>

int parser(char c)
   {
   if (isdigit(c))
      {
      return 1;
      }
   else if (isalpha(c))
      {
      return 2;
      }
   else if (isspace(c))
      {
      return 3;
      }
   else if (ispunct(c))
      {
      return 4;
      }
   else
     {
     return 0;
     }
   }

void typer(char *v, int i)
   {
   switch (i)
      {
      case 0:
         printf("Invalid - does not match criteria");
	 break;
      case 1:
	 printf("%c is a digit", *v);
	 break;
      case 2:
	 printf("%c is a character", *v);
      	 break;
      case 3:
	 printf("%c is a space", *v);
	 break;
      case 4:
	 printf("%c is punctuation", *v);
	 break;
      }
   return;
   }

int main(void)
   {
   char *v;
   fgets(v, 50, stdin);
   printf("\n");
   while (*v != '\0')
      {
      typer(v, parser(*v));
      printf("\n");
      v++;
      }
   return 0;
   }
