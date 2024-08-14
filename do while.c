#include<stdio.h>
int main(){
int i = 0;
do{
    printf("Jerry\n");

} while(i>0);
printf("out of loop");
}


/*
do{
    statement  1
      '        2
      '        3
      modify/update
}
while(condition)
*/

/*
             statement block
   |--------------|
   |              v
   |        increment / decrement
   |              |
   |              v
   |    true /-----------\
   |---------| Condition | ----false
             \-----------/     |
                        |------|
   */
