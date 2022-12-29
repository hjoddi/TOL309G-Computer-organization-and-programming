#include <stdio.h> 
void fall(); 
 
static int a = 1; 
int b = 2; 
extern int c; 
extern int d; 
 
int main() { 
   int c = 3;     
     
   fall(); 
   printf("a:%d, b:%d\n", a, b); 
   printf("c:%d, d:%d\n", c, d); 
   return 0; 
} 