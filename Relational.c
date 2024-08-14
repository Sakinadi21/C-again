/*
< > <= >= == !=
'a' < 'b" = 1

3<5 = true =1
3>5 = 0
3+5 < 5+5
*/
#include <stdio.h>

int main() {
    int a = 18, b = 9;
    printf("%d\n", a != b); // Added \n for better readability
    printf("%d\n", 'c' < 'd'); // Added \n for better readability
    getchar(); // Waits for a character input to mimic getch() behavior
    return 0;
}
