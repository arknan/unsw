#include<stdio.h>

#define MAXLENGTH 65536

void sort ( int *array, int array_len );

int main ( void )
{
    int array[MAXLENGTH] ;
    int array_len = 0 ;
    while ( (scanf("%d", &array[array_len]) ) != EOF )
    {
        array_len ++ ;
    }
    printf("\nThis is the pre-sorted array\n");
    for ( int i = 0 ; i < array_len ; i ++ )
    {
        printf("%d\n", array[i]);
    }

    sort(array, array_len) ;

    printf("\nThis is the sorted array\n");
    for ( int i = 0 ; i < array_len ; i ++ )
    {
        printf("%d\n", array[i]);
    }
}
void sort ( int *array, int array_len )
{
    for ( int j = 1 ; j < array_len ; j ++ )
    {
        while (( j >= 0 ) && ( array[j] < array[j-1] ))
        {
            int temp = array[j-1];
            array[j-1] = array[j];
            array[j] = temp ;
            j -- ;
        }
    }
}

