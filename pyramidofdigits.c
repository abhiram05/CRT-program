/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,j;
    for(n=1;n<=5;n++)
    {
    for(j=1;j<=n;j++)
    {
    printf("%d\t",j);
    }
    printf("\n");
    }
    return 0;
}
