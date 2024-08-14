//WAP to read two arrays of five 5 & store sum of these arrays into third array

#include<stdio.h>
int main()
{
 int arr1[5],arr2[5],sumArr[5],i;
 printf("enter first array elements : \n");
 for(i=0;i<5;i++)
 {
        scanf("%d", &arr1[i]);
 }
printf("enter second array elements : \n");
for(i=0;i<5;i++)
 {
        scanf("%d", &arr2[i]);
 }
 for(i=0;i<5;i++)
 {
     sumArr[i]=arr1[i]+arr2[i];
     printf("\n sum array element at index %d is : %d",i,sumArr[i]);
 }
}
