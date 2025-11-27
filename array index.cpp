#include<stdio.h>
int main()
{
    int n, i, index;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];  // Array declaration
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter index to find the number: ");
    scanf("%d", &index);
    
    // Check if index is valid
    if(index >= 0 && index < n)
    {
        printf("The number at index %d is: %d\n", index, arr[index]);
    }
    else
    {
        printf("Invalid index! Please enter between 0 and %d.\n", n-1);
    }
    return 0;
    
}

