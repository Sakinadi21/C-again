#include<stdio.h>

void count(int n) {
    static int d = 1;

    printf("%d\n", n);
    printf("%d\n", d);  // Added newline for better readability
    d++;

    if(n > 1) {
        count(n - 1);  // Added missing semicolon
    }

    printf("%d\n", d);  // Added newline for better readability
}

int main() {
    count(3);
    return 0;
}
/*
          count 3
    3  1  count2      pf(d) 4
          2 2 count1    pf(d) 4
                1  3  4

    3 1 2 2 1 3 4 4 4

    */
