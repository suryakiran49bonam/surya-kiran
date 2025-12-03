#include <stdio.h>

int isSelfDividing(int num) {
    int original = num;
    while (num > 0) {
        int digit = num % 10;
        if (digit == 0 || original % digit != 0) {
            return 0; // Not self-dividing
        }
        num /= 10;
    }
    return 1; // Self-dividing
}

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    for (int i = A; i <= B; i++) {
        if (isSelfDividing(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}

