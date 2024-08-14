int sum(int x)
{
    int s =0;
    if(x==1)
        return x;
    s = x + sum(x-1);
    return s;
}
void main()
{
    int a;
    a=sum(5);
    printf("%d",a);
}


/*
   sum(5)=15
    |
    v
        10
 5+ sum(4)  =15
     |
     v   6
 4+ sum(3)  =10
     |
     v  3
 3+ sum(2)  = 6
     |
     v
2+ sum(1) = 3
     |
     v
    return 1
*/
