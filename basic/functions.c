#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// function prototypes

int sum2(int, int);
void status_update(char*);
void increment(int*);


// functions
int sum2(int n1, int n2){
    int sum = n1 + n2;
    status_update("Numbers added");
    return sum;
    }

void status_update(char* str1){
    printf("%s\n",str1);
}

void increment(int* n){
    *n += 1;
}


int main(){
    int sum = sum2(1,2);
    printf("%d\n", sum);
    increment(&sum);
    printf("%d\n", sum);
    return 0;
}
