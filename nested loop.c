/*
for(I, C, ++/--)
{
 for ( I, C, ++/-- )
 {
   inner loop statement
   block;
 }
 outer loop statement block
}




for( j=1 ; j<=6 ; j++)
{
 for(i=1; i<=5 ;i++)
 {
 printf("x");
 }
 printf( "\n ");
}
   j=1  i=5
   j=2  i=5




          /------------\
          | Outer loop |
false|----| Condition  |   <----------|
     |     \------------/       |
     |         |                |
     |         v true


          /------------\
          | inner loop |
false|----| Condition  |   <----|
     |     \------------/       |
     |           |                |
outer loop s b   v true
               inner loop
                 |
                 v
                 Update expo-----
     |
     |--------------------------------

