int a=10;
int *p=&a;
p=p+2;


p+n = p+n & size of data type
    =1008
    printf("%d",*p);


a            p
|10|<------|1008|
1000        1046



|----|-----|------|-----|-----|------|----|------|-------|
|    |     |      |     |     |      |    |      |       |
|----|-----|------|-----|-----|------|----|------|-------|
1000  1001   1002   1003  1004  1005



int a[5]={0,12,3,-1,10}
int *P=&a[0]
printf("%d",*p);
p=p+2;
a=a+2;
printf("%d",*p);
p=p+1;
printf("%d",*p);

p=&a[0]
p+n = &a[0+n]
p+2 = &a[2]
