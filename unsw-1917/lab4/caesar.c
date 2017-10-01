#include<stdio.h>
#include<stdlib.h>

int rotate_right(int ch);
int rotate_left(int ch);
int encode (int ch, int shift);

int main (int argc, char *argv[])
{
    int ch, shift ;
    shift = atoi(argv[1] ) ;
    printf("Enter Text:\n");

    ch = getchar();
    while (ch != EOF)
    {
        putchar(encode(ch, shift)) ;
        ch = getchar();
    }

    return EXIT_SUCCESS ;
}

int rotate_right(int ch)
{
    if ( (ch >= 'A') && (ch <= 'Z') )
    {
        ch = ch - 'A' ;
        ch = (ch + 1) % 26 ;
        return ( ch + 'A' );
    }
    else if ( (ch >= 'a') && (ch <= 'z') )
    {
        ch = ch - 'a' ;
        ch = (ch + 1) % 26 ;
        return (ch + 'a') ;
    }
    else 
    {
        return ch ;
    }
}


int rotate_left(int ch)
{
    if ( (ch >= 'A') && (ch <= 'Z') )
    {
        ch = ch - 'A' ;
        ch = (ch - 1 + 26) % 26 ;
        return ( ch + 'A' );
    }
    else if ( (ch >= 'a') && (ch <= 'z') )
    {
        ch = ch - 'a' ;
        ch = (ch - 1 + 26) % 26 ;
        return (ch + 'a') ;
    }
    else 
    {
        return ch ;
    }
}

int encode (int ch, int shift)
{
    if ( shift == 0 )
    {
        return ch ;
    }
    else if ( shift > 0 )
    {
        while ( shift > 0 )
        {
            shift -- ; 
            ch = rotate_right(ch);
        }
        return ch ;
    }
    else if ( shift < 0 )
    {
        while ( shift < 0 )
        {
            shift ++ ;
            ch = rotate_left(ch);
        }
        return ch ;
    }
    return 0 ;
}
