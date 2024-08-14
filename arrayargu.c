#include<stdio.h>
int main()
{
    int marks[5]={10,20,30,40,50},size,average;
    size=sizeof(marks)/sizeof(marks[0]);
    average=avg(marks,size);
    printf("average =%d\n",average);
}

int avg(int marks[],int size)
{
    int i,sum=0,average=0;
    for(i=0;i<size;i++)
    {
        sum=sum+marks[i];
    }
    average = sum/size;
    return average;
}
