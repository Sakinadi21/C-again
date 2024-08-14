#include<stdio.h>

// Function declarations
int fun1(int n);
int fun2(int n);

int main() {
    int s = 5;  // Example value for s
    printf("%d\n", fun1(s));
    return 0;
}

// Function definitions
int fun1(int n) {
    if (n <= 1)
        return 1;
    else
        return n * fun2(n - 1);
}

int fun2(int n) {
    if (n <= 1)
        return 1;
    else
        return n * fun2(n - 1);
}
