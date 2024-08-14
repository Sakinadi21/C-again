#include<stdio.h>

int main() {
    int i = 1; // Initialize variable i to 1
    int j; // Declare variable j

    do {
        j = 3; // Reset j to 3 at the start of each iteration of the outer loop
        do {
            printf("%d", --j); // Decrement j by 1 and print its value
        } while(j > 0); // Continue the inner loop as long as j is greater than 0

        printf("%d\n", i++); // Print the value of i and then increment i by 1
    } while(i < 4); // Continue the outer loop as long as i is less than 4

    return 0; // Return 0 to indicate successful program termination
}

/*
for(
   {

       while (C)
    {

        do
    }
   } while (c);





do
{
//outer loop statements
do{
    //Inner loop statements
    -------block;
} while(Condition);

} while(condition);


    O.L statement
         |
         v
    I.L statement
         |
         v
    /-----------\
    | I.l       |
    | Condition |
    \-----------/
         | false
         v
    /-----------\
    | O.l       |
    | Condition |
    \-----------/
         | false
         v
        END
   */
