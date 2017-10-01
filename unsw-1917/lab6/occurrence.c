#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int n;
    int array[10] = {0}; 
    while ( (n = getchar()) != EOF )
    {
        n = n - '0' ;
        if ( ( n >= 0 ) && ( n <= 9 ) )
        {
            array[n] = array[n] + 1 ;
        }
    }

    printf("\n");
    for ( int i =0 ; i < 10 ; i ++ )
    {
        printf("%d     %d\n", i, array[i]) ;
    }
    return 0 ; 
}

