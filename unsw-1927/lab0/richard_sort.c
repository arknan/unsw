#include<stdio.h>

#define MAXLENGTH 655360


int main ( void )
{
    int array[MAXLENGTH] = {0} ; ;
    int temp ;
    while ( (scanf("%d", &temp) ) != EOF )
    {
        //printf("temp = %d ; array[temp] = %d\n", temp, array[temp]);
        array[temp] ++ ; 
    }
    for ( int i = 0 ; i < MAXLENGTH ; i ++ )
    {
        //printf("i is %d ; array[i] is %d \n", i, array[i];
        while (array[i] != 0)
        {
            printf("%d\n", i);
            array[i] -- ;
        }
    }

}
