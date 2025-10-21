#include <stdio.h>

int main() {
    int n, i, index, newValue;

    
    printf("Enter the number of elements you want to input: ");
    scanf("%d", &n);

    
    int arr[n];

   
    printf("\nEnter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    
    printf("\nYou entered the following elements:\n");
    for(i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    
    printf("\nEnter the index of the element you want to modify (0 to %d): ", n - 1);
    scanf("%d", &index);

  
    if(index < 0 || index >= n) {
        printf("Invalid index! No modification made.\n");
        return 0;
    }

    printf("Enter new value for arr[%d]: ", index);
    scanf("%d", &newValue);
    arr[index] = newValue;

    
    printf("\nUpdated elements of the array:\n");
    for(i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}

