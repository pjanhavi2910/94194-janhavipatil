/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
unsigned int reg= 0XABCD;
unsigned int lower,upper;

 printf("input:");
 printf("0x%02X\n",reg);
 
   lower4 = reg & 0x0F;
  printf("output after extracting lower bytes :",lower4);
  
     printf("0x%02X\n",lower4);
     
        upper4 = (reg>>4) & 0x0F;
  printf("output after extracting UPPER BITS FROM LOWER BYTE  :",lower4);
   printf("0x%02X\n",upper4);
     
  

}
