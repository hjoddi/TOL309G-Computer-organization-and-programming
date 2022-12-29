#include <stdio.h>
#include <stdlib.h>

int isprime(long k) {

    if (k == 0 || k == 1) {
        return 0;
    }
    
    
    for (int i = 2; i <= k / 2; i++) {
        if (k % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main(int argc, char *argv[]) {

    if (argc<1) {
        exit(1);
    }
    int n = atoi(argv[1]);


    int fjoldiTwinPrime = 0;

    long current = 0;
    
    while (fjoldiTwinPrime < n) {
        if (isprime(current) == 1) {
            if (isprime(current + 2) == 1) {
                fjoldiTwinPrime += 1;
                printf("%ld og %ld\n", current, current + 2);
            }
        }
        current += 1;
    }

    return 0;
}