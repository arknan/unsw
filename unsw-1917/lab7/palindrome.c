#include<stdio.h>
#include<string.h>
#include<ctype.h>

int is_palindrome( char s[]) ;

int main(void)
{
    printf("Enter a string \n");
    char s[256] ;

    if (fgets(s, 256, stdin)) 
    {
        if (is_palindrome(s) == 1) 
        {
            printf("The original string was : ");
            fputs(s,stdout) ;
            printf("Yes, is a palindrome\n");
        }
        else
        {
            printf("The original string was : ");
            fputs(s,stdout) ;
            printf("No, not a palindrome\n");
        }
    }
    else 
    {
        printf("No input detected\n");
    }
    return 0 ;
}

int is_palindrome( char s[]) 
{
    int str_len = strlen(s) - 1;
    int counter = (str_len / 2) + 1; 
    int temp = 0 ;
    for ( int i = 0 ; i < counter ; i ++ )
    {
        while ( ! isalpha(s[i]) )
        {
            i ++ ; 
        }
        while ( ! isalpha(s[str_len]) )
        {
            str_len -- ;
        }
        if ( tolower(s[i]) != tolower(s[str_len]) ) 
        {
            temp = 1 ;
        }
        str_len -- ;
    }
    if ( temp == 0 ) 
    {
        return 1;
    }
    else 
    {
        return 0; 
    }
}

