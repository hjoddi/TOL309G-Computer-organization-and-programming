#include <stdio.h>
int main() {

    long reikn (long k) {
        long r = 0 + 8 * k;
        r = r - k;
        long a = 12 + k + 1 * k;
        r = r - a;
        return r;
    }

    long x = reikn(1);

    printf("%ld", x);
}