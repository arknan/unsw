#include<stdio.h>

//#define MAXLENGTH 2096450  // Max length my raspberry pi supports :( .. damn you memory
//#define PIVOT (2096450/2) // midpoint ; so that we can store both negative and positive values
#define MAXLENGTH 20960011  // Max length my raspberry pi supports :( .. damn you memory
#define PIVOT ((MAXLENGTH+1)/2) // midpoint ; so that we can store both negative and postive values

/* PIVOT is where our numeric 0 is stored, i.e. exactly in the middle of the array so that 1st half can be negative numbers and the second half of the array can be positive numbers.
We want the maxlength to be an odd number because it gives us a nice even distribution of, 
negatve and positive numbers ; if maxlength = 3 ; then pivot = ((3+1) / 2) = 2. So 1st element can be -1 ; second can be 0 and third can be 1 . */

int main ( void )
{
    int array[MAXLENGTH] = {0} ; ;
    int temp ;
    while ( (scanf("%d", &temp) ) != EOF )
    {
        //printf("temp = %d ; array[temp] = %d\n", temp, array[temp]);
        array[temp + (PIVOT -1)] ++ ;  // since our array starts from 0 and not 1
    }
    for ( int i = 0 ; i < MAXLENGTH ; i ++ )
    {
        //printf("i is %d ; array[i] is %d \n", i, array[i];
        while (array[i] != 0)
        {
            printf("%d\n", i - (PIVOT + 1));
            array[i] -- ;
        }
    }

}
