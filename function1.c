#include<stdio.h>

// Function declaration
float sum(float a, float b);

int main() {
    // Function calling with arguments 5 and 7
    sum(5, 7);
    return 0;
}

// Function definition
float sum(float a, float b) {
    float result = 0;
    result = a + b; // Calculate the sum of the two numbers
    printf("Sum = %f\n", result); // Print the sum
    return result; // Return the result (although not used in this example)
}
