return type(*pointer_name)(Data type of arguments);
int (*ptr)(int,int)=&sum;
int(* ptr)(int int);


int sum(int a,int b)
{
    return a+b;
}


void main()
{
    int s=0;
    int (*ptr )(int ,int)=sum;
    s=ptr(2,3);
    printf("%d",s);
}
int sum(int a,int b)
{
    return a+b;
}
