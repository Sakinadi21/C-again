#include <stdio.h>

// Function declaration
char sum(void);

int main() { // Use 'int main()' instead of 'void main()'
    char s;
    s = sum(); // Call the 'sum' function and store the return value in 's'
    printf("sum=%c\n", s); // Print the character returned by the 'sum' function
    return 0; // Return 0 to indicate successful execution
}

// Function definition
char sum(void) {
    int a = 5, b = 7;
    int result = a + b; // Store the sum of 'a' and 'b' in 'result'

    return 'a'; // This line returns the character 'a'
    // The next line is unreachable because a return statement has already been executed
    // return result; // This would attempt to return an integer where a character is expected, which is incorrect
}
