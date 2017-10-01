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
    int smallest ;
    for ( int j = 0 ; j < array_len ; j ++ )
    {
        smallest = j ;
        for (int i =j ; i < array_len ; i ++)
        {
//            printf(" j is %d, i is %d, array[j] is %d, array[i] is %d\n", j, i, array[j], array[i]);
            if ( array[j] > array[i] )
            {
//                printf("ya loop if \n");
                smallest = i ;
            }
        }
        if ( smallest != j )
        {
//            printf("ya last if\n");
            int temp = array[smallest] ;
            array[smallest] = array[j] ;
            array[j] = temp ;
        }
    }
}

