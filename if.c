/*if(condition)
statement;
alter if statements;
*/
#include <stdio.h>
void main() {
    int a;
    printf("Enter a: ");
    scanf("%d", &a);
    if (a) {
        printf("Inside of block\n");
    }
    printf("out of block\n");
    // Removed getch(); since it's not a standard function.
    getchar(); // This will pause the program, waiting for a key press.
}

/*
_______________
|  Enter a :5 |
|             |
|             |
|             |
_______________

*/

/*    |
  /Condition\  false
  \_________/------|
      |            |
True  |            |
      V            |
Statement block    |
      |            |
      |            |
      v            |
after if    <------|
 statements
