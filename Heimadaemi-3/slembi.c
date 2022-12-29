#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

    // Skipun til að fá mismunandi slembirunu í hvert sinn.
    srand(time(0));

    // Athugar hvort inntak er rétt.
    if (argc<2) {
        exit(1);
    }

    // Upphafstillir breytur með inntaki.
    int n = atoi(argv[1]);
    int k = atoi(argv[2]);

    // Debug prentun.
    printf("n = %d, k = %d.\n", n, k);

    // Býr til n-staka heiltölufylkið a með calloc.
    int *a = (int*)calloc(n, sizeof(int));

    // Bý til slembitölu r og hækka a[r] um einn; endurtek n*k sinnum.
    for (int i = 0; i < (k * n); i++) {
        int r = rand() % n;
        a[r] += 1;
    }

    // Athuga í hve mörgum hólfum í a er 0.
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            count += 1;
        }
    }

    // Skila í hve mörgum hólfum a er 0.
    int itr = n * k;
    float hlutfall = ((float)count / (float)n) * 100;
    printf("Eftir %d itranir eru %d holf enntha 0, eda %.1f%%.", itr, count, hlutfall);

    return 0;
}