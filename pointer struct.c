#include <stdio.h>

struct Student
{
    int rollno;
    char name[20];
    float marks;
};

void main()
{
    struct Student s[3];
    int i; // Declare the loop variable
    struct Student *ptr; // Declare a pointer to Student

    // Input the details for each student
    for(i = 0; i < 3; i++)
    {
        printf("Enter roll number, name, and marks for student %d: ", i + 1);
        scanf("%d %s %f", &s[i].rollno, s[i].name, &s[i].marks);
    }

    // Print the details for each student
    for(i = 0; i < 3; i++)
    {
        ptr = &s[i]; // Point to the current student
        printf("Roll no is %d\n", ptr->rollno);
        printf("Name is %s\n", ptr->name);
        printf("Marks are %.2f\n", ptr->marks);
        printf("\n");
    }
}
