#include<stdio.h>
void display(int n)
{

    if(n<1)
        return;
    else

    {
       printf("%d",n);
       display(n-1);
       printf("%d",n);
    }

}
void main()
{
     int n=3;
     display(n);
}

/* n 0---------
n 1  pf(n)=1   |  display 1
display(0) _ <-|
pf(n)       \
             |
n 2 pf(n)=2  |
display(1) \ <-| display 2
pf(n)       |
            |
            |
n 3 pf(n)=3 |
display(2)<-|
pf(n)

main()
n(3)
