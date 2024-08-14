/*
if(condition 1)
{
  if(condition 2)
  {
    Innner if block statements;
  }
  else {
    inner else block statements;
  }

}
else{
    outer else block statement
} */

#include <stdio.h>

int main() {
    int age, salary;
    printf("Enter age & salary: \n");
    scanf("%d %d", &age, &salary);

    if (age > 50) {
        if (salary < 600000) {
            salary += 10000; //salary=salary + 100000
        } else {
            salary += 1000;
        } //if(age>50 && salary 600000) { salary = salary + 100000 )
    } else {
        salary += 300;
    }

    printf("Updated salary: %d\n", salary);
    printf("End of Program\n");

    // Use getchar() to wait for a key press if needed
    getchar();  // Consumes the newline character left by scanf
    getchar();  // Waits for the user to press enter

    return 0;
}

/*
                      /-----------\
            true-----| Condition  | ------ false
                |     \-----------/      |
                v                        |
            /-----------\                |
  true----- | Condition |            0 else B statement
  |         \-----------/                |
  v                                      |
inner of                                 |
B statement                              |
  |                                      |
  |                                      |
  |---------> Statement <----------------



