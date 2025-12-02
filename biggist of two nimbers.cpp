#include <stdio.h>

int main() {
    int num1, num2;
    
    // Input
    scanf("%d", &num1);
    scanf("%d", &num2);
    
    // Logic
    if (num1 > num2) {
        printf("%d\n", num1);
    } else {
        printf("%d\n", num2);
    }
    
    return 0;
}
