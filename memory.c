Memory Representation and Accessing of Array

[ interal pointer ]
|
|  int a[5] = {1,10,0-1,1};
|  4x5=20 bytes
|
|--->  a->  0     1     2      3     4
          | 1  |  10  |  0  |  -1 |  3
           2000  2004   2008 2012   2016

           |
           v
           base address :
               a[0]=1 => First element
               a[3] = -1 => Fourth element


B + (index X size of int )
= 2000 + 3*4
= 2012
