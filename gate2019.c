int main() {
    int x = 2, y = 5; // Initialize variables x and y
    y = jumble(y, x); // Call jumble with arguments y and x
    x = jumble(x, y); // Call jumble with arguments x and the updated y
    printf("%d\n", x); // Print the value of x
    return 0; // Return 0 to indicate successful execution
}
/*
int x = 2, y = 5;: Initializes x to 2 and y to 5.
y = jumble(y, x);: Calls the jumble function with y as the first argument and x as the second argument. The result is assigned to y.
Here, jumble(5, 2) computes 2 * 5 + 2, which equals 12. So, y is updated to 12.
x = jumble(x, y);: Calls the jumble function again with the updated values of x and y. The result is assigned to x.
Here, jumble(2, 12) computes 2 * 2 + 12, which equals 16. So, x is updated to 16.
printf("%d\n", x);: Prints the final value of x, which is 16.
return 0;: Indicates that the program executed successfully.
Summary:
The program initializes two variables, x and y,
calls the jumble function twice with different arguments,
and prints the final result. The jumble function performs a
 simple arithmetic operation, and the final output of the program is 16.
/
