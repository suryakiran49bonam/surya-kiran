#include <stdio.h>

int main() {
    int X, Y;
    
    // Read inputs
    scanf("%d", &X);
    scanf("%d", &Y);
    
    // Calculate total expenditure for 30 days
    int total = Y * 30;
    
    // Check if Akshat has enough money
    if (X >= total) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}
