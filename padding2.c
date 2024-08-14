#include <stdio.h>

#pragma pack(1)  // This directive sets the structure alignment to 1 byte

struct abc {
    char a;
    int b;
    char c;
};

int main()  // Corrected to 'int main()'
{
    struct abc s;  // Declare the variable 's' of type 'struct abc'
    printf("%d\n", sizeof(s));  // Use 'sizeof' with the variable 's'
    return 0;  // Return statement for main function
}

/*
Effect of #pragma pack(1)
Without #pragma pack(1), the compiler might add padding to align the members of the structure in memory,
potentially increasing its size. For example, in many systems:

char typically takes 1 byte.
int typically takes 4 bytes.
Without packing, the structure might be padded to align int b to a 4-byte boundary, leading to a larger size.
With #pragma pack(1), no such padding is added, so the structure's size will be the exact sum of its members:

char a = 1 byte
int b = 4 bytes
char c = 1 byte
Total = 6 bytes

*/
