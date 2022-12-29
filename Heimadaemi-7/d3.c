#include <stdio.h>
int main() {

    int func(int n) {
        if (n <= 1) {               // Samsvarar cmpl $1, %edi og jle .L3.
                                    // Innihald if-segðarinnar samsvarar .L3.
            return 1;               // Samsvarar movl $1, %eax og ret.
        }

        return (n + func(n >> 2));  // n samsvarar cmovns %edi, %edx.
                                    // n >> 2 samsvarar sarl $2, %edx.
    }

    int bl = func(400);
    printf("%d", bl);
}