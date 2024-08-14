#include <stdio.h>

int main() {
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks > 80) {
        printf("Grade is A\n");
    } else if (marks > 70) {
        printf("Grade is B\n");
    } else if (marks > 60) {
        printf("Grade is C\n");
    } else if (marks > 50) {
        printf("Grade is D\n");
    } else {
        printf("Grade is F\n");
    }

    printf("End of Program\n");

    // Use getchar() to wait for a key press if needed
    getchar();  // Consumes the newline character left by scanf
    getchar();  // Waits for the user to press enter

    return 0;
}




/*
if(condition 1)
    Statement 1 ;
else if(condition 2)
   Statement 2 ;
else if(condition 3)
   Statement 3 ;
else if(condition 4)
   Statement 4 ;
        '
        '
        '
else if(condition n)
   Statement n ;
   else
     Default Statement;
Statement x;
*/

/*                    /------------\
            true----- | Condition 1 | ------ false
                |     \------------/      |
                v                         |
                                          v
            Statement 1               /-----------\
                           true----- | Condition 2 | ------ false
               |             |         \-----------/      |
               |             v                            |
               |       Statement 2                        v
               |            |                        /-----------\
               |            |             true----- | Condition 2 | ------ false
               |            |             |          \-----------/          |
                            |             v                                 |
                            V         Statement 3                           v
               |----------> Statement <----|
*/
