#include<stdio.h>
struct student{
int rollno;
char name[20];
float marks;
} s3={2};

void main()
{
    struct student s1={1,"Mashu",99};
    struct student s2;
    s2=s1;

    printf("info for s1");
    printf("\n  %d %s %f ",s1.rollno,s1.name,s1.marks);
    printf("\n info for s2");
    printf("\n  %d %s %f ",s2.rollno,s2.name,s2.marks);
    printf("\n info for s3");
    printf("\n  %d %s %f ",s3.rollno,s3.name,s3.marks);

}
