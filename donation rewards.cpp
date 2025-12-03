#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);

    if (X <= 3) {
        printf("BRONZE\n");
    } else if (X <= 6) {
        printf("SILVER\n");
    } else {
        printf("GOLD\n");
    }

    return 0;
}

