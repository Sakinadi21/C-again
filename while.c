#include <stdio.h>

int main() {
    int i; //i=10; while (i) infinity loop
while(i<=10){
    printf("%d\n",i);
    i++;
}
printf("End of program.");
// Use getchar() to wait for a key press if needed
    getchar();

    return 0;
}


/*
initialization
while(condition)
{
//body of loop
statement 1
 '
 '
 '
 statement n
 Update/modify
} statement abc
*/
/*
            Initialization
                  |
                  v
               /----------\
     false ---| Condition | <--------|
          |    \----------/          |
          |         |                |
          |         | true           |
      Statement     v                |
                  Block              |
                   of                |
                Statement            |
                    |                |
                    |                |
                    v                |
                  Modify-------------|
*/
