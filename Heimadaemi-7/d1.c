#include <stdio.h>
int main() {

    long hoho (long x) {
        long r = 31 + x;
        if ((x & x) >= 0) {
            r = x;
        }

        r = r >> 5;
        return r;
    }

    long bl = hoho(300);
    printf("%ld", bl);
}