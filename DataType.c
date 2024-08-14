#include <stdio.h>

int main() {
    int a = 32786;
    printf("%d\n", a); // \n to move to a new line after printing
    getchar(); // Waits for a character input to mimic getch() behavior
    return 0; // Added return statement to indicate successful program termination
}


/*
Data types in C
||-->Tells how much storage/memory to be allocated to a variable.

|-->Primary-->int,float,char,double,void
|-->Derived-->Array,Structure,Union,Pointers
|-->User defined-->typedef,Enumerated DT,typedef int Saki

int-Short int (1 byte)
long int(4 byte)
signed int(-32768 to 32767)
unsigned int(0 to 65535)

2GB=2 x 1024 x 1024 x 8 bit

int(16 bit) --> valid -250,15053,+2100,0
--> invalid 4,442 , -31.8 ,88888888888888

char a , 1 bytes (8 bits)
--> signed --> -128 to 127
--> unsigned --> 0 to 255
printf("%c",98);

float --> 4 bytes  4 x 8 bits
-3.4e38 to +3.4e38

float a ;   double salary
a = 10.0;   long double average
printf("%lf",salary) --> 10.000000000
-->double --> 8bytes
--> long double --> 10 bytes



                                            size(byte)
char or signed char   | -128 to 127      |      1      | %c
 unsigned char        | 0 to 255         |      1      | %c
 int or signed char   | -32768 to 32767  |      2      | %d
 unsigned int         | 0 to  65535      |      2      | %u
 long int             | -2147483648 to
                        2147483848       |      4      | %ld
 unsigned long  int   |0 to 4294969295   |      4      | %lu
short int             | -128 to 127      |      1      | 0
 unsigned short int   | 0 to 255         |      1      | 0
 float                | -34e38 to +34e38 |      4      | %f
double                | -1.7e308 to
                        +1.7e308         |      8      | %lf
long double           | -2.4e4932 to
                        +1.e4932         |      10     | %lf


 2 byte
 0= |0|0|0|0|0|0|0|0|
 1= |1|1|1|1|1|1|1|1|


 Char(%c)
 -signed-->128 to 127
 unsigned --> 0 to 255













*/
