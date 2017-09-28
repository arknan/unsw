#include <stdio.h>

#define TRUE     1
#define FALSE    0

#define SIZE     3

#define NONE    -1
#define NOUGHTS  0
#define CROSSES  1
#define EMPTY    2

void  scanBoard( int board[SIZE][SIZE] );
void printBoard( int board[SIZE][SIZE] );
int   getWinner( int board[SIZE][SIZE] );
int check_row ( int board[SIZE][SIZE] ) ;
int check_column( int board[SIZE][SIZE] );
int check_left_diag( int board[SIZE][SIZE] );
int check_right_diag( int board[SIZE][SIZE] );

int main( void )
{
  int board[SIZE][SIZE];
  int winner;

  printf("Please enter the board:\n");
  scanBoard( board );
   
  printf("Here is the board:\n");
  printBoard( board );

  winner = getWinner( board ) ;
  if ( winner == CROSSES )
  {
      printf("Crosses Win\n");
  }
  else if ( winner == NOUGHTS )
  {
      printf("Noughts Win\n");
  }
  else
  {
      printf("No Winner\n");
  }
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
    int winner = check_row( board ) ;
    if ( winner != NONE )
    {
        return winner;
    }
    winner = check_column( board ) ;
    if ( winner != NONE )
    {
        return winner;
    }
    winner = check_left_diag( board ) ;
    if ( winner != NONE )
    {
        return winner;
    }
    winner = check_right_diag( board ) ;
    if ( winner != NONE )
    {
        return winner;
    }
    return NONE;
} 

int check_row( int board[SIZE][SIZE] )
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
        if ( x == SIZE )
        {
            return CROSSES ;
        }
        else if ( o == SIZE )
        {
            return NOUGHTS ;
        }
        x = 0 ; 
        o = 0 ;
    }
    return NONE;
}

int check_column( int board[SIZE][SIZE] )
{
    int x = 0 ;
    int o = 0 ;
    for ( int i =0 ; i < SIZE ; i ++ )
    {
        for ( int j =0 ; j < SIZE ; j ++ )
        {
           if ( board[j][i] == '0' )
            {
                 o ++ ;  
            }
            else if ( board[j][i] == '1' )
            {
                x ++ ;
            }
        }
        if ( x == SIZE )
        {
            return CROSSES ;
        }
        else if ( o == SIZE )
        {
            return NOUGHTS ;
        }
        x = 0 ; 
        o = 0 ;
    }
    return NONE ;
}

int check_left_diag ( int board[SIZE][SIZE] )
{
    int x = 0 ; 
    int o = 0 ;
    for ( int i =0 ; i < SIZE ; i ++ )
    {
        for ( int j =0 ; j < SIZE ; j ++ )
        {
            if ( i == j )
            {
                if ( board[i][j] == '0') 
                {
                    o ++ ; 
                }
                else if ( board[i][j] == '1' )
                {
                    i ++ ;
                }
            }
        }
    }
    if ( x == SIZE )
    {
        return CROSSES ;
    }
    else if ( o == SIZE )
    {
        return NOUGHTS ;
    }
    return NONE;
}

int check_right_diag( int board[SIZE][SIZE] )
{
    int x = 0 ; 
    int o = 0 ;
    for ( int i =0 ; i < SIZE ; i ++ )
    {
        for ( int j =0 ; j < SIZE ; j ++ )
        {
            if ( j == (SIZE - 1 - i) )
            {
                if ( board[i][j] == '0') 
                {
                    o ++ ; 
                }
                else if ( board[i][j] == '1' )
                {
                    i ++ ;
                }
            }
        }
    }
    if ( x == SIZE )
    {
        return CROSSES ;
    }
    else if ( o == SIZE )
    {
        return NOUGHTS ;
    }
    return NONE;
}

