#include <stdio.h>

int main() {
    int eng, math, phy, chem, cs;
    
    // Read five subject marks
    scanf("%d %d %d %d %d", &eng, &math, &phy, &chem, &cs);
    
    // Check if all marks are greater than 34
    if (eng > 34 && math > 34 && phy > 34 && chem > 34 && cs > 34) {
        printf("PASSED\n");
    } else {
        printf("FAILED\n");
    }
    
    return 0;
}
