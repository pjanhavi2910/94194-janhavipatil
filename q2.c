/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
 unsigned char reg= 0x08;
 {
 if(reg&(1<<3))
    printf("bit 3 is set");
  else 
    printf("bit 3 is clear ");
 
 return 0;
 }
}
