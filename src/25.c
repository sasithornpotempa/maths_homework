#include <stdio.h>

int main() {
    int i;
    printf("Enter a number: ");
    scanf("%d", &i);
    
    if (i > 0) {
        printf("The number is positive.\n");
    } else {
        printf("The number is not positive.\n");
    }
    
    return 0;
}
