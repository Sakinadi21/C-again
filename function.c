#include<stdio.h>

// Function to calculate and print the sum of two numbers
void sum() {
    int a, b, result = 0;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b); // Take input from the user for two integers
    result = a + b; // Calculate the sum of the two numbers
    printf("Sum = %d\n", result); // Print the result
}

int main() { // Corrected the function signature to 'int main()'
    sum(); // Call the sum function
    printf("Hello\n"); // Print "Hello"
    sum(); // Call the sum function again
    sum(); // Call the sum function a third time

    return 0; // Return 0 to indicate successful execution
}
