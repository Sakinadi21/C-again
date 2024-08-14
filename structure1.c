student1
int_rollnos1;
char_names[20]
float_marksS1;

int rollno[60];
float marks[60];


Student 2
int rollnoS2
char nameS2[20];
float marksS2;


Declaring variables/objects of structure
struct student
{
    int rollno;
    float marks;
    char address[50];
};


struct xyz{
int x;
float y;
char x[10];
};

struct abc{
int x;
int y;
int z;
};

struct emp
{
char *empname;
int empid;
};




1)
struct Student{

    int rollno;   ............4
    char name[20]; .......20
    float marks;  ............4
    char address[50];
};
void main()
{
    int a;
    struct student s1,s2;
}
