#include<stdio.h>

//#define MAXLENGTH 2096450  // Max length my raspberry pi supports :( .. damn you memory
//#define PIVOT (2096450/2) // midpoint ; so that we can store both negative and positive values
#define MAXLENGTH 2096000  // Max length my raspberry pi supports :( .. damn you memory
#define PIVOT (2096000/2) // midpoint ; so that we can store both negative and postive values


int main ( void )
{
    int array[MAXLENGTH] = {0} ; ;
    int temp ;
    while ( (scanf("%d", &temp) ) != EOF )
    {
        //printf("temp = %d ; array[temp] = %d\n", temp, array[temp]);
        array[temp + PIVOT] ++ ;  
    }
    for ( int i = 0 ; i < MAXLENGTH ; i ++ )
    {
        //printf("i is %d ; array[i] is %d \n", i, array[i];
        while (array[i] != 0)
        {
            printf("%d\n", i - PIVOT);
            array[i] -- ;
        }
    }

}
