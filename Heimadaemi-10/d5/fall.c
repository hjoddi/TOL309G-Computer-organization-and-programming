int a; 
extern int b; 
int c = 4; 
int d = 5; 
 
void fall() { 
    static int d; 
     
    a = 6; 
    b = 7; 
    c = 8; 
    d = 9; 
} 