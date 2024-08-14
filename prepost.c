
/*
++ --
prefix = ++x
postfix = ++x

--x,x-- ; x=x-1;
*/

#include <stdio.h>

int main() {
    int x = 10;
    int y = ++x; // Declare and initialize y

    printf("%d\n", x); // \n added for better readability 11
    printf("%d\n", y); // \n added for better readability 11
    return 0; // Return statement to indicate successful program termination
}
