#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter an integer n: ");
    scanf("%d", &n);
    
    if (n % 2 == 0) {
        for(i = 1; i <= n / 2; i += 2)
            printf("*");
        
        for(i = n - 1; i > 1; i -= 2)
            printf("*");
            
        for(i = 1; i < n / 2; i += 2)
            printf(" ");
        
        printf("*\n");
    }
    else {
        for(i = 1; i <= (n - 1) / 2; i += 2)
            printf("*");
        
        for(i = n - 1; i > 1; i -= 2)
            printf("*");
            
        for(i = 1; i < ((n + 1) - 1) / 2; i += 2)
            printf(" ");
    }
    
    return 0;
}
