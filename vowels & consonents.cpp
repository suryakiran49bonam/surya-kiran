#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    
    // Read a single character
    scanf("%c", &ch);
    
    // Convert to lowercase for easy comparison
    ch = tolower(ch);
    
    // Check if vowel or consonant
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("VOWEL\n");
    } else {
        printf("CONSONANT\n");
    }
    
    return 0;
}
