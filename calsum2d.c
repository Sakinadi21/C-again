#include<stdio.h>
int main()
{
    int a[2][3],i,j,sum=0;
    printf("enter elements of matrix: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix is : \n");
        for(i=0;i<2;i++){
            for(j=0;j<3;j++)
            {
                printf("%d\t",a[i][j]);
                sum=sum+a[i][j];
            }
            printf("\n");
        }
        printf("sum=%d",sum);
    }

    /*

    j  col\   0,0  0,1  0,2
           \   0    1    2
    i  row |----------------
        0  |  10 | -1 |  3 |
          ------------------
        1  |   0 | 2  | 5  |
          ------------------
            1,0    1,1   1,2


          -------------------------------------
     a     10  |  -1  | 3  | 0  |  2  |  5 |
          -------------------------------------
            ----Row1-----   ------Row2------
            100  104    108   112  116   120

*/

