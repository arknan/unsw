#include<stdio.h>
#include<string.h>

int main ( void )
{
    char s[50] ;
    fgets(s, 50, stdin);
    int st = strlen(s) ;
    printf(" str len = %d\n", st);
    for ( int i = 0 ; i < st ; i ++)
    {
        printf("%c\n", s[i]);
    }
}
