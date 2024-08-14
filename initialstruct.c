struct student
{
    int rollno;
    char name[20];
    float marks;
};
void main()
{

    struct student s1 = {1};
    struct student s2 = { 2,"mashu",95};
    printf("%d",s2 rollno);
}


or;

void main()
{

    struct student s1;
    struct student s2={1,"mashu",95};
    s1.rollno = 1;
    s1.name="mashu";
    s1.marks=90;

}

or;

void main()
{

    struct student s1={1};
}
