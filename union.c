#include <stdio.h>

union abc
{
    int a;
    char b;
    float c;
};

void main()
{
    union abc u;
    union abc *ptr = &u;

    u.a = 1;
    printf("a value is: %d\n", ptr->a);  // Print the value of 'a'

    u.b = 97;  // This overwrites the value of 'a'
    printf("b value is: %d\n", ptr->b);  // Print the value of 'b'

    u.c = 78.90;  // This overwrites the value of 'b'
    printf("c value is: %.2f\n", ptr->c);  // Print the value of 'c'
}
/*
A union in C is a user-defined data type that allows different data types to be stored in the same memory location.
Unlike a struct, where each member has its own memory location, in a union, all members share the same memory location.
This means that at any given time, only one of the union's members can hold a value, and assigning a value to one member will overwrite
the values of the other members.
*/
