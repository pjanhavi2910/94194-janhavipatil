/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
 unsigned char reg= 0x2A;
    
    {
         printf( "input :" );
    for(int i=7; i>=0;i--)
    {
        printf(("%d"),((reg>>i)&1));
        if(i==4) printf(" ");
    }
    printf("\n");
    }
     reg |= (1<<4);
     {
        printf( "output after setting bit 4  :" );
    for ( int i=7; i>=0;i--)
    {
        printf(("%d"),((reg>>i)&1));
        if(i==4) printf(" ");
    }
     }
        printf("\n");
      reg&= ~(1<<1);
     {
        printf( "output after clearing  bit 1 :" );
    for ( int i=7; i>=0;i--)
    {
        printf(("%d"),((reg>>i)&1));
        if(i==4) printf(" ");
    }
      printf("\n");
      
     }
      reg^= (1<<5);
     {
        printf( "output after toggling bit 5  :" );
    for ( int i=7; i>=0;i--)
    {
        printf(("%d"),((reg>>i)&1));
        if(i==4) printf(" ");
    }
     }
       printf("\n");

    return 0;
}