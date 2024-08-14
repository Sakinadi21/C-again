#include<stdio.h>
int main(){
    int a=10,b=6;
printf("%d\n" , a&b );
printf("%d\n" , a|b );
printf("%d\n" , a^b );
printf("%d\n" , a&b && b+1 || 0 || b++);
printf("%d\n" , a>>2); // 10/2^4 = 10/16 = 0
printf("%d\n" , (a+1)<<2 );
printf("%d\n" , (a+2)>>1 );
}

/* & - bitwise And
| - bitwise OR
^ - bitwise XOR
~ - bitwise NOT
<< - left shift
>> - right shift
*/
