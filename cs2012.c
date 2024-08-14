#include <stdio.h>

// Global variables
int a, b, c = 0;

// Function declarations
void prtFun(void);

int main() {
    int a = 1; // Local variable in main
    prtFun();
    a += 1; // a = a + 1
    prtFun();
    printf("\n %d %d", a, b); // Print local 'a' from main and global 'b'
    return 0;
}

void prtFun(void) {
    register int a = 2; // Local variable in prtFun
    int b = 1;

    a += (++b || (a = a + ++b)); // Fix the logic here
    printf("\n %d %d", a, b); // Print local 'a' and 'b' in prtFun
}

