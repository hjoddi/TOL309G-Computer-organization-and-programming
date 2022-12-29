#include <stdio.h>
int main() {

    long aogb (long a, long b) {
        long c = b + (4 * b);
        long d = a + (8 * c);
        c = 0 + (8 * d);
        c = c - d;
        return c;
    }

    long x = aogb(2, 5);
    printf("%ld", x);
}