/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a=5,p;
    p=++a + ++a + ++a;
    printf("a=%d p=%d",a,p);
    return 0;
}
