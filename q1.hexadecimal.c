/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
 unsigned char reg= 0x2A;
 
    printf("input (hex) : 0x%02X\n", reg);
    reg |= (1 << 4);
    printf("output after setting bit 4 (hex) : 0x%02X\n", reg);
    reg &= ~(1 << 1);
    printf("output after clearing bit 1 (hex): 0x%02X\n", reg);
    reg ^= (1 << 5);
    printf("output after toggling bit 5 (hex): 0x%02X\n", reg);
    return 0;
}
