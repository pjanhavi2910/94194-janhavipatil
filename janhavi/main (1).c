/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

// Function prototype (optional but good practice)
void print_bin(void *vp, int size);

int main(void)
{
    printf("Hello World\n");

    char ch = 10;                 // Example 1-byte variable
    print_bin(&ch, sizeof(ch));   // Print its binary

    unsigned int n1 = 0xFAFA;     // 4-byte variable
    print_bin(&n1, sizeof(n1));   // Print binary of each byte

    return 0;
}

// Function definition OUTSIDE main
void print_bin(void *vp, int size)
{
    int i;

    // Loop from the most significant byte to the least.
    for(i = size - 1; i >= 0; i--)
    {
        unsigned char mask = 0x80;      // Start checking from MSB (bit-7)

        // Check all 8 bits of the selected byte
        while(mask)
        {
            if( *((unsigned char *)vp + i) & mask )
                printf("1");
            else
                printf("0");

            mask >>= 1;  // Move mask to next lower bit
        }

        printf(" ");     // Space between bytes
    }

    printf("\n");
}
