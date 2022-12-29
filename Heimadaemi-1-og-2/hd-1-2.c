#include <stdio.h>
typedef struct {
    int a[2];
    double d;
} struct_t;
double fun(int i) {
    volatile struct_t s;
    s.d = 3.14;
    s.a[i] = 1073741824;
    return s.d;
}
int main() {
    printf("fun(0):  %f\n", fun(0));
    printf("fun(1):  %f\n", fun(1));
    printf("fun(2):  %f\n", fun(2));
    printf("fun(3):  %f\n", fun(3));
    printf("fun(4):  %f\n", fun(4));
    printf("fun(5):  %f\n", fun(5));
    printf("fun(6):  %f\n", fun(6));
    return 0;
}