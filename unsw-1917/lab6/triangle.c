#include<stdio.h>

int main (void) 
{
    int size ;
    printf("Enter a number \n");
    scanf("%d", &size);

    for ( ; size > 0 ; size -- )
    {
        for ( int k = 0 ; k < size ; k ++ )
        {
            printf("*");
        }
        printf("\n");
        size -- ; 
    }
    return 0 ;
}
