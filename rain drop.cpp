#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int hasFactor = 0;

    if (N % 3 == 0) {
        printf("Pling");
        hasFactor = 1;
    }
    if (N % 5 == 0) {
        printf("Plang");
        hasFactor = 1;
    }
    if (N % 7 == 0) {
        printf("Plong");
        hasFactor = 1;
    }

    if (!hasFactor) {
        printf("%d", N);
    }

    printf("\n");
    return 0;
}
