#include <stdio.h>

int main() {
    int X, A, B;
    
    // Read input values
    scanf("%d %d %d", &X, &A, &B);
    
    // Calculate total score
    int score = A * 1 + B * 2;
    
    // Check qualification
    if (score >= X) {
        printf("Qualify\n");
    } else {
        printf("Not Qualify\n");
    }
    
    return 0;
}
