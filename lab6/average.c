#include<stdio.h>

void average (int n, int a[]) ;

int main(void)
{
    int n;
    printf("Enter an integer\n");
    scanf ("%d", &n);
    int array[n] ;
    printf("Please Enter %d array elements\n", n); 
    for ( int i = 0 ; i < n ; i ++)
    {
        scanf("%d", &array[i] );
    }
    average(n, array);
    return 0 ; 
}

void average (int n, int a[]) 
{
    float avg ; 
    int sum = 0 ;
    for ( int i = 0 ; i < n ; i ++)
    {
        sum = sum + a[i] ; 
    }
    avg = sum /(float)(n) ; 
    printf (" Average is %.2f\n", avg);
}
