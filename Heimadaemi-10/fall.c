#include <stdio.h> 
 
short int a = 22; 
short int b = 23; 
extern int main; 
 
void fall() { 
    printf("a: %d, b: %d\n", a, b); 
    printf("0x%x\n", main); 
} 