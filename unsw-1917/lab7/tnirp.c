#include<stdio.h>
#include<string.h> 
#include<stdlib.h>

#define  MAXLEN  128

char* reverse_string( char s[]); 

int main( void )
{
   char s[MAXLEN];

   printf("Enter string:\n");
   fgets( s, MAXLEN, stdin );
   char *rev = reverse_string( s );
   printf("%s\n", rev);

   return 0;
}

char* reverse_string( char s[])
{
    int str_len = strlen(s) ;
    char *rev = malloc(str_len)  ;
    rev[str_len -1] = '\0' ;
    for ( int i = 0 ; i < str_len-1; i ++ )
    {
        rev[i] = s[str_len -2 -i] ;
    }
    return rev ;
}
