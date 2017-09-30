#include<stdio.h>

int main(void)
{
    int n;
    int power = 1;
    printf("Enter an integer\n");
    scanf ("%d", &n);

    if ( n == 1 ) 
    {
        printf("%d is 2^0 \n", n);
        return 1; 
    }
    else if ( n == 2) 
    {
        printf("%d is 2^1 \n", n);
        return 1; 
    }


    while ( n > 2 ) 
    {
        if ( n % 2 != 0 )
        {
            printf("%d is not a power of 2\n", n);
            return 0 ;
        }
        n = n / 2 ;
        power ++ ; 
    }
    printf("%d is 2^%d\n", n, power);
    return 1; 
}
