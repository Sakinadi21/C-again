#include <stdio.h>

int main() {
    int i, j;
    for (i = 1, j = 0; i <= 5 , j < 3; i++, j++) {
        printf("%d %d\n", i, j);

        /*  1 0
            2 1
            3 2
        */
    }

    // Use getchar() to wait for a key press if needed
    getchar();

    return 0;
}

/*
#include<stdio.h>
void main (){
int i,j;
for (i=1,j=0;i<=5,j<3;i++){
    printf(" %d %d \n ",i,j);
}
getch();
}

output:
1 0
2 0
3 0
' 0
' 0
n 0
*/


/*for ( ; ;)
    initialization;condition;update/modify
for(Expression 1 ; expression 2 ; expression 3)

// loop Body
       1     2   4
for (i=1;i<=10;i++){
   3 printf("i=%d",i);
}
printf("JK");
//1 to 10

               |
               v
        Initialization
               |
               v
            /--------\
false------|Condition |<---------
     |      \--------/          |
     |          |               |
     |          | true          |
     |          v               |
     |    Body of loop          |
     |          |               |
     |          v               |
     |     Modify/Update --------
     |--------|
              |
              v
*/
