#include <stdio.h>

int main() {
    int productIDs[10];
    int n = 10;               
    int i, j, removeID;
    
   
    printf("Enter 10 product IDs (3 digits each):\n");
    for(i = 0; i < n; i++) {
        printf("Product ID %d: ", i + 1);
        scanf("%d", &productIDs[i]);
    }

  
    printf("\nEnter the Product ID you want to remove: ");
    scanf("%d", &removeID);

   
    for(i = 0; i < n; i++)
	 {
        if(productIDs[i] == removeID) {
            
            for(j = i; j < n - 1; j++) {
                productIDs[j] = productIDs[j + 1];
            }
            n--;  
            i--;  
        }
    }

    printf("\nUpdated list of Product IDs:\n");
    if(n == 0) {
        printf("All products have been removed. Inventory is empty.\n");
    } else {
        for(i = 0; i < n; i++) {
            printf("Product ID %d: %d\n", i + 1, productIDs[i]);
        }
    }

    return 0;
}

