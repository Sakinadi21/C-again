At compile time:-
   6x4 =24

   int a[2][3]={0,0,0,1,1,1,1};
             0    1      2
           ----------------
   Row 0   | 0 |  1  |  2 |
           ----------------
           ----------------
   Row 1   | 1 |  1  |  1 |
           ----------------

   int a[][3]={
                {0,0,0},
                {1,1,1}
              };





Run time :-                      i=0/1/2
                                  j=0
 int a[2][3];
 for(i=0;i<2,i++)
 {
     for(j=0;j<3;j++)
     {
         scanf("%d",&a[i][j]);
     }
 }

             0     1     2
           ------------------
   Row 0   | 1   |  1  |  2 |
           ------------------
           ------------------
   Row 1   | 1,0 | 1,1 | 1,2 |
           -------------------



