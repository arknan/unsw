#include<stdio.h>
#include<ctype.h>

#define MAXLENGTH 65536

void sort ( int *array, int array_len );

int main(void)
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
    int swap ; 
    int counter ;
    for ( int j = 0 ; j < array_len -1 ; j ++ )
    {
        counter = 0 ;
        for ( int i = 0 ; i < array_len -1 ; i ++ )
        {
//            printf("a[i] is %d ; a[i+1] is %d", array[i], array[i+1]);
            if ( array[i] > array[i+1] )
            {
                swap = array[i] ;
                array[i] = array[i+1] ;
                array[i+1] = swap ;
                counter ++ ;
            }
        }
        if ( counter == 0 )
        {
            break ;
        }
        array_len -- ;
    }
}
