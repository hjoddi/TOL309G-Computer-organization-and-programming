#include <stdio.h>
int main() {

    int whi (long x) {
        int r = 0;              // Samsvarar movl $0, %eax.

        do {                    // Samsvarar .L3.
            x = x & (x-1);      // Samsvarar andq %rdx, %rdi.
                                // %rdx (eða x-1 í sviganum)
                                // samsvarar svo 
                                // leaq -1(%rdi), (rdx).
            r = r | 1;          // Samsvarar xorq $1, %rax.
        }
        while ((x & x) != 0);   // Samsvarar jne .L3.

        return r;               // Samsvarar ret.
    }

    long bl = whi(10000);
    printf("%ld", bl);
}