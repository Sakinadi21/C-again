#include <stdio.h>

typedef struct student {
    int rollno;
    char name[60];  // Corrected field name from 'rollno' to 'name'
    float marks;
} student;

int main()  // Changed 'void main' to 'int main'
{
    student s = {1, "Mashu", 100.0};  // Corrected float value for 'marks'
    printf("%d %s %.2f\n", s.rollno, s.name, s.marks);  // Corrected format specifier for float
    return 0;  // Added return statement
}
/*
typedef is a keyword in C that allows you to create an alias or a new name for an existing data type.
This can make your code more readable, especially when dealing with complex data types like pointers or structures.
By using typedef, you can simplify the syntax of your code.
*/
