#include<stdio.h>

int main(int argc, char *argv[])
{
    int num ;
    int counter = 2;
    int is_prime = 0 ;
    printf("Please enter a number : ");
    scanf ("%d", &num);

    while (counter < num)
    {
        if (num % counter != 0)
        {
            is_prime = 1 ;
        }
        counter ++ ; 
    }

    if ( is_prime == 1 )
    {
        printf("%d is prime\n", num);
        return 0 ;
    }

    counter = 2 ;
    printf("%d = ", num);
    while (counter < num)
    {
        while ( num % counter == 0 )
        {
            num = num / counter ; 
            printf("%d", counter);
            if (num % counter == 0)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        counter ++ ; 
    }
    return 0 ;
}
