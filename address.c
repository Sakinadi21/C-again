&(address of ) and * (Indirection) opertaor


int a =10 ,b=a;
p=&a,&b;

        a         b
|--->| 10 |     | 9 |<----
|                        |
|    p              q    |
|--|1000|           |2000|
    3046              2046
int a =10;
b=a;
p=&a;
p=&b;
printf("value of a=%d",a);=10
printf("a=%d",p); = 1000
printf("address of a =%x",&a);
printf("address of p =%x",&p);
printf("address of a =%x",p);
