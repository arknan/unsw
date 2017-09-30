#include<stdio.h>

int main(void)
{
    int n;
    while ( (n = getchar()) != EOF )
    {
        frequency(n);
    }
}

