#include <stdio.h>

#define TRUE     1
#define FALSE    0

#define SIZE     4

#define NONE    -1
#define NOUGHTS  0
#define CROSSES  1
#define EMPTY    2

void  scanBoard( int board[SIZE][SIZE] );
void printBoard( int board[SIZE][SIZE] );
int   getWinner( int board[SIZE][SIZE] );

int main( void )
{
  int board[SIZE][SIZE];
//  int winner;

  printf("Please enter the board:\n");
  scanBoard( board );
   
  printf("Here is the board:\n");
  printBoard( board );

  return 0;
}

void scanBoard(int board[SIZE][SIZE])
{
    for ( int i =0 ; i < SIZE ; i ++ )
    {
        for ( int j =0 ; j < SIZE ; j ++ )
        {
            char x = getchar();
            while ( (x == ' ') || (x == '\n') )
            {
                x = getchar();
            }
            board[i][j] = x ; 
        }
    }
}


void printBoard(int board[SIZE][SIZE])
{
    for ( int i =0 ; i < SIZE ; i ++ )
    {
        for ( int j =0 ; j < SIZE ; j ++ )
        {
            if ( board[i][j] == '0' )
            {
                printf("O");
            }
            else if ( board[i][j] == '1' )
            {
                printf("X");
            }
            else if ( board[i][j] == '2' )
            {
                printf(".");
            }
            if ( j != (SIZE - 1) )
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}


int getWinner( int board[SIZE][SIZE] )
{
    int x = 0 ; 
    int o = 0 ;

    for ( int i =0 ; i < SIZE ; i ++ )
    {
        for ( int j =0 ; j < SIZE ; j ++ )
        {
           if ( board[i][j] == '0' )
            {
                o ++ ; 
            }
            else if ( board[i][j] == '1' )
            {
                i ++ ;
            }
        }
        if ( x == 4 )
        {
            printf("Crosses Win\n");
            return 0 ;
        }
        else if ( o == 4 )
        {
            printf("Noughts Win\n");
            return 0 ;
        }
        x = 0 ; 
        o = 0 ;
    }
} 
