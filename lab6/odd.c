#include<stdio.h>

int main(void)
{
    int n;
    int counter = 1 ;
    printf("Enter an integer\n");
    scanf ("%d", &n);

    while ( counter <= n ) 
    {
            printf("%d\n", counter);
            counter += 2 ;
    }
}
