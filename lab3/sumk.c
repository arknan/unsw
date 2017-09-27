#include<stdio.h>

int sum(int num);
int main (int argc, char *argv[])
{
    int k = 1;
    while ( k <= 15 )
    {
        printf("%2d%5d\n", k, sum(k));
        k ++ ;
    }
    return 0;
}

int sum(int num)
{
    if (num == 1)
    {
        return 1 ;
    }
    else 
    {
        return (num +sum(num -1));
    }
}



