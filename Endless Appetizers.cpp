#include <stdio.h>

int main() {
    int X, Y, R;
    scanf("%d %d %d", &X, &Y, &R);

    // Calculate total sticks eaten
    int extra = R / 30;
    int total = X + extra;

    // Calculate maximum plates (ceiling division)
    int plates = (total + Y - 1) / Y;

    printf("%d\n", plates);
    return 0;
}
