#include <stdio.h>
#include <math.h> // Required for the pow() function

// Function to calculate the number of digits in a number
int countDigits(int num) {
    int count = 0;
    if (num == 0) return 1; // Handle the case of 0
    while (num != 0) {
        num /= 1
        count++;
    }
    return count;
}

