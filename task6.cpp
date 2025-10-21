#include <stdio.h>

int main() {
    int numbers[5];          
    int results[5][3];       
    int i;

    
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    
    for(i = 0; i < 5; i++) {
        results[i][0] = numbers[i] + 10;  
        results[i][1] = numbers[i] - 5;   
        results[i][2] = numbers[i] * 2;   
    }

    
  
    printf("Number\tAdd 10\tSubtract 5\tMultiply by 2\n");


    for(i = 0; i < 5; i++) {
        printf("%d\t%d\t%d\t\t%d\n", numbers[i], results[i][0], results[i][1], results[i][2]);
    }

 

    return 0;
}

