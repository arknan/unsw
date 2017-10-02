// Ashwin Ramakrishnan - October 1st, 2017.

#include<stdio.h>
#include<stdlib.h>

#define MAXLENGTH 2098001  // how big I want my array to be
#define PIVOT ((MAXLENGTH+1)/2) // midpoint ; so that we can store both negative and postive values

/* PIVOT is where our numeric 0 is stored, i.e. exactly in the middle of the array.
We want this behaviour, so that 1st half of the array can be negative numbers and the second half can be positive numbers.
We want the maxlength to be an odd number because it gives us a nice even distribution of negatve and positive numbers.
Example : if maxlength = 3, then pivot = ((3+1) / 2) = 2. So 1st element can be -1 ; second can be 0 and third can be 1 . */


int main ( void )
{
    int *array = malloc(sizeof(int)*MAXLENGTH) ;
    if ( array == NULL )
    {
        printf(" Not enough memory :(\n") ;
        return EXIT_FAILURE ;
    }
    int temp ;
    while ( (scanf("%d", &temp) ) != EOF )
    {
        array[temp + (PIVOT -1)] ++ ;           // Since our array starts with an index 0 and not 1 
    }
    for ( int i = 0 ; i < MAXLENGTH ; i ++ )
    {
        while (array[i] != 0)
        {
            printf("%d\n", (i - (PIVOT-1) ) );
            array[i] -- ;
        }
    }
    free(array);
    return EXIT_SUCCESS ;
}

