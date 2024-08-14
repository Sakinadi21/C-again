#include<stdio.h>

// Function declaration
void sum(float a, float b);

int main() { // Corrected to 'int main()'
    float x, y;
    printf("Enter x and y: ");
    scanf("%f %f", &x, &y); // Input x and y values from the user
    sum(3.4, 4.1); // Call the sum function with 3.4 and 4.1 as arguments
    return 0; // Return 0 to indicate successful execution
}

// Function definition
void sum(float a, float b) {
    // float s = 0; // (Unnecessary line removed)
    // s = a + b; // (Unnecessary line removed, directly used in printf)
    printf("Sum = %f\n", a + b); // Print the sum of a and b
}

/*
void fun(int, int); // Function declaration

void fun(int x, int y) { // Function definition
    // Function body (currently empty)
} */
