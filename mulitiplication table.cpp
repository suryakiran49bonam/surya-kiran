#include <stdio.h>

int main() {
    int N, A, B;
    
    // Read input values
    scanf("%d %d %d", &N, &A, &B);
    
    // Print multiplication table from A to B
    for (int i = A; i <= B; i++) {
        printf("%d x %d = %d\n", N, i, N * i);
    }
    
    return 0;
}

