#include<stdio.h>

int main(int argc, char *argv[])
{
    int num ;
    int counter = 1;
    int sum = 0;
    printf("Please enter number : ");
    scanf ("%d", &num);

    while (counter <= num)
    {
        if (num % counter == 0)
        {
            printf("%d\n", counter);
            sum = sum + counter;
        }
        counter ++ ; 
    }
    sum = sum - num ; 
    printf("Sum of factors = %d\n", sum);
    if ( sum == num )
    {
        printf("%d is a perfect number.\n", num);
    }
    else 
    {
        printf("%d is not a perfect number.\n", num);
    }
    return 0 ;
}
