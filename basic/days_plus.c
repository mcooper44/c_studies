/* function to add days to a year
 * usefully if you want to know
 * when you have lived 10000 days...
 */

#include <stdio.h>
#include <stdbool.h>

// Globals + Constants
int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

// Prototypes
bool is_leap_year(int year);
void add_days_to_date(int* mm, int* dd, int* yy, int days_left_to_add);

// Functions
bool is_leap_year(int year) {
  if (((year % 4 == 0) && (year % 100!= 0)) || (year % 400 == 0)) {
    return true;
  } else {
    return false;
  }
}

void add_days_to_date(int *mm,int *dd, int *yy, int days_left_to_add) {
  
    int days_left_in_month;
  
    while (days_left_to_add > 0) {
        days_left_in_month = days_in_month[*mm] - *dd;

        if (*mm == 2 && is_leap_year(*yy)) { 
            days_left_in_month++;
            }
        if (days_left_to_add >= days_left_in_month) {  
            days_left_to_add -= days_left_in_month;      
            *dd = 1;      
            days_left_to_add--;
            if (*mm != 12) {                          
                *mm = *mm + 1;                          
                }
            else {
                *mm = 1;                              
                *yy = *yy + 1;                           
                }
        } 
        else {                                   
          *dd = *dd + days_left_to_add;              
          days_left_to_add = 0;                      
            }
    }
}

int main() {
  
    int mm, dd, yy, days_left_to_add;
    
    printf("mm dd yyyy days\n");
    scanf("%d %d %d %d", &mm, &dd, &yy, &days_left_to_add);
    add_days_to_date(&mm, &dd, &yy, days_left_to_add);
    printf("%d %d %d\n", mm, dd, yy);
}
