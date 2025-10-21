#include <stdio.h>
#include <ctype.h>   

int main() {
    char str[100];
    int i;

   
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  
    
    for(i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); 
        
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            str[i] = toupper(str[i]);  
        }
    }

 
    printf("\nModified string: %s", str);

    return 0;
}

