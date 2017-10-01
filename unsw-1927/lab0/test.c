#include<stdio.h>
#include<ctype.h>

int main(void)
{
    char c[65536] ;
    fgets(c, 65536, stdin) ;
    printf("%s", c+1);
    /*if (isdigit(c))
    {
        printf("%s", c);
    }*/
}
