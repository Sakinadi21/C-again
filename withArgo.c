#include<stdio.h>

// Function declaration
int sum(int a, int b);

int main() { // Use 'int main()' instead of 'void main()'
    int x, y, c;
    printf("Enter x and y: ");
    scanf("%d %d", &x, &y); // Take input for x and y
    c = sum(x, y); // Call the sum function and store the result in c
    printf("Sum = %d\n", c); // Print the sum
    return 0; // Return 0 to indicate successful execution
}

// Function definition
int sum(int a, int b) {
    int s = a + b; // Calculate the sum of a and b
    return s; // Return the sum
}
