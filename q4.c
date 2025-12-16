/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
unsigned int reg= 0X05;
unsigned int result1,result2;

 printf("input:");
 printf("0x%02X\n",reg);
 
   result1= reg<<2;
  printf("output after shifting left  :");
  
     printf("0x%02X\n",result1);
     
     result2= reg>>1;
  printf("output after shifting right :");
   printf("0x%02X\n",result2);
     
  

}
