//to read marks of s students calculate sum & avg using Arrays

#include<stdio.h>
int main()
{
    int i;
    float marks [5] ;
    float sum =0.0 ,avg;
    printf("enter marks of 5 students");
    for(i=0; i<5; i++)
    {
        scanf("%f",&marks[i]);
    }
    for(i=0 ; i<5 ;i++)
    {
        sum = sum + marks[i];
    }
    avg = sum/5;
    printf("sum=%f",sum);
    printf("\n average=%f",avg);

}
