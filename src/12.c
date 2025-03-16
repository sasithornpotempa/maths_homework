#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  int x = 0; // Initialize the variable to hold the number
  
  printf("Enter a number: ");
  scanf("%d", &x); // Ask user for input and store it in x

  if (x >= 1 && x <= 10) { // Check if x is between 1 and 10
    printf("The square of %d is %d.\n", x, pow(x, 2)); // Print the result using pow() function from math.h
  } else {
    printf("Number must be between 1 and 10.\n");
  }

  return 0;
}
