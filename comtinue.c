/*                      |
                   /-----------\
                   | loop      | ----------
    false--------  | condition |          |
       |           \-----------/          |
       |            true |              Update
       |                 v                |
       |           /-------------\    true|
       |           | Condition   | -------
       |           | for continue|
       v           \-------------/
   Statement        false |
                          v
                  Returning statement
                         of loop



The continue statement in a loop causes the loop to immediately jump to the next iteration,
skipping any code that follows it within the loop body. In this program, if the user enters a negative integer,
 the continue statement skips the addition of that integer to the sum and proceeds with the next iteration of the loop.*/

#include<stdio.h>

void main() {
    int i, a, sum = 0; // Declare variables i, a, and sum; initialize sum to 0

    // Loop from 1 to 5 to get 5 integers from the user
    for(i = 1; i <= 5; i++) {
        printf("Enter an integer: "); // Prompt the user to enter an integer
        scanf("%d", &a); // Read the integer from the user and store it in variable 'a'

        if(a < 0) {
            continue; // If the entered integer is negative, skip the rest of the loop iteration
        }

        sum = sum + a; // Add the non-negative integer to the sum
    }

    printf("sum = %d\n", sum); // Print the sum of the non-negative integers, followed by a newline
}
