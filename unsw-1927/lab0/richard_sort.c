#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    struct node *previous ;
    int data ;
    struct node *next ;
} node ;

int main (void) 
{
    node *head = malloc(sizeof(node));  // our head pointer
    node *first = malloc(sizeof(node)); // initialize first node
    node *temp = malloc(sizeof(node));  // temp node for scanf
    node *cursor = malloc(sizeof(node)); // cursor node to traverse

    head->previous = NULL ;
    head->next = first; 

    first->previous = head ;
    first->next = NULL ;

    temp->previous = NULL ;
    temp->next = NULL ;

    scanf("%d", &first->data) ;
   // printf("Val is : %d", first->data);
    while ( (scanf("%d", &temp->data ) ) != EOF )
    {
        cursor = head->next;
        //printf("cursor data is %d\n", (cursor->data) ); 
        //printf("temp data is %d\n", (temp->data) ); 
        if ( (temp->data) <= (cursor->data) )
        {
            cursor->previous = malloc(sizeof(node));
            cursor->previous->previous = head ;
            cursor->previous->data = temp->data ;
            cursor->previous->next = head->next ;
            head->next = cursor->previous ;
        }
        else
        {
            cursor = head ;
            while ( cursor->next != NULL )
            {
                cursor = cursor->next ; // traverse to the end of the list
            }
            printf("cursor data is %d\n", (cursor->data) ); 
            cursor->next = malloc(sizeof(node)) ;
            cursor->next->previous = cursor ;
            cursor->next->data = temp->data ;
            cursor->next->next = NULL ;
        }
    }
    temp = head ;
    while ( temp->next != NULL )
    {
        printf("%d\n", temp->next->data) ;
        temp = temp->next ;
    }
}
