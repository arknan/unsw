#include<stdio.h>

int main (void) 
{
    int size ;
    printf("Enter a number \n");
    scanf("%d", &size);

    while ( size > 0 )
    {
        int temp = size ;
        while ( temp > 0 )
        {
            printf("*");
            temp -- ;
        }
        printf("\n");
        size -- ; 
    }
    return 0 ;
}
