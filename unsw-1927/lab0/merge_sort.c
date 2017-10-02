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
    if ( array_len != 1 )
    {
        int new_array_len ; 
        if ( array_len % 2 == 0 )
        {
            new_array_len = array_len / 2;
            int *left_array = malloc(new_array_len) ; 
            int *right_array = malloc(new_array_len) ;
            for ( int i = 0 ; i < new_array_len ; i ++ )
            {
                left_array[i] = array[i] ;
                right_array[i] = array[array_len - new_array_len + i ]
            }
            sort ( left_array, new_array_len )
            sort ( right_array, new_array_len )
        }
/*        else 
        {
            new_array_len = ( array_len - 1 ) / 2;
            int *left_array = malloc(new_array_len + 1) ; 
            int *right_array = malloc(new_array_len) ;
            for ( int i = 0 ; i < new_array_len ; i ++ )
            {
                left_array[i] = array[i] ;
                right_array[i] = array[array_len - new_array_len + i ]
            }
            left_array[new_array_len] = array[new_array_len] ;

            sort ( left_array, new_array_len+1 )
            sort ( right_array, new_array_len )
        }
*/
    }
}
