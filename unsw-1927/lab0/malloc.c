#include<stdio.h>
#include<stdlib.h>

int main (void)
{
    int *arr = malloc(sizeof(int)*209800000);
    arr[1] = 1 ;
    arr[5] = 5 ;
    printf("arr[1] is %d ; arr[5] is %d\n", arr[11], arr[5] ) ;
    free(arr);
    return 0 ;
}
