#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    // Declare variables
    int num1, num2;
    float result;

    // Get user input for numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate sum, difference, product and quotient of the two numbers
    result = num1 + num2;
    printf("Sum is: %d\n", result);
    result = num1 - num2;
    printf("Difference is: %d\n", result);
    result = num1 * num2;
    printf("Product is: %d\n", result);
    result = num1 / num2;
    printf("Quotient is: %d\n", result);

    return 0;
}
