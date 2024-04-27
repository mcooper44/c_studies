/*  implementation of strcpy function
 *  developed for CodeAcademy exercise
 */

#include<stdio.h>
#include<string.h>
 
void copy(char* dst, char* src)
    {
    
    char* t1 = src;
    char* t2 = dst;
    
    while(*t1 != '\0')
        {
            *t2 = *t1;
            t1++;
            t2++;
        }
    *t2 = '\0'; 
    }
 
int main()
    {
        char srcString[] = "We promptly judged antique ivory buckles for the next prize!";
        int len = strlen(srcString) + 1;
        char dstString[len];
        
        copy(dstString, srcString);
        printf("%s\n", dstString);
    }
