/* Simple function using boolean logic
 * to test if a given year is a leap
 * year.
 */

#include <stdio.h>
#include <stdbool.h>

// Prototypes
bool is_leap_year(int year);

// Functions
bool is_leap_year(int year) {
  if (((year % 4 == 0) && (year % 100!= 0)) || (year % 400 == 0)) {
    return true;
  } else {
    return false;
  }
}

int main() {
  int year;
  printf("enter year ... ");
  scanf("%d", &year);
  bool result = is_leap_year(year);
  if (result) {
    printf("Leap Year\n");
  } else {
    printf("Not Leap Year\n");
  }
}
