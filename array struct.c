#include <stdio.h>

struct Student
{
    int rollno;
    char name[20];
    float marks;
};

void main()
{
    struct Student s[3];  // Array of 3 Student structures
    int i;  // Declare the loop variable

    // Input the details for each student
    for(i = 0; i < 3; i++)
    {
        printf("Enter roll number, name, and marks for student %d: ", i + 1);
        scanf("%d %s %f", &s[i].rollno, s[i].name, &s[i].marks);
    }

    // Print the details for each student
    for(i = 0; i < 3; i++)
    {
        printf("Roll no is %d\n", s[i].rollno);

        printf("Name is %s\n", s[i].name);
        printf("Marks are %.2f\n", s[i].marks);
        printf("\n");
    }
}
