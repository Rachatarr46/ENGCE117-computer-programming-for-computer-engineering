#include <stdio.h>
#include <string.h>

struct studentNode {
    char name[20] ;
    int age ;
    char sex ;
    float gpa ;
    struct studentNode *next ;
} ;


void ShowAll( struct studentNode **walk ) ;
void InsNode( struct studentNode **nowNode, char n[], int a, char s, float g );
void GoNext( struct studentNode ***Node ) ;
void DelNode( struct studentNode **Node );

int main() {
    struct studentNode *start, **now ;
    start = NULL ; now = &start ;
    InsNode( now, "one", 6, 'M', 3.11 ) ; ShowAll( &start ) ;
    printf("\n");
    InsNode( now, "two", 8, 'F', 3.22 ) ; ShowAll( &start ) ;
    printf("\n");
    GoNext( &now ) ;
    printf("\n");
    InsNode( now, "three", 10, 'M', 3.33 ) ; ShowAll( &start ) ;
    printf("\n");
    InsNode( now, "four", 12, 'F', 3.44 ) ; ShowAll( &start ) ;
    printf("\n");
	GoNext( &now ) ;
    printf("\n");
	DelNode( now ) ; ShowAll( &start ) ;
    return 0 ;
}//end function

void ShowAll( struct studentNode **walk ) {
    while( *walk != NULL ) {
    printf( "%s ", (*walk)->name ) ;
    walk = &(*walk)->next ;
    }//end while
    printf( " " ) ;
}//end function

void InsNode( struct studentNode **nowNode, char n[], int a, char s, float g ){
    struct studentNode *newNode = new studentNode;
    strcpy(newNode->name, n);
    newNode->age = a;
    newNode->sex = s;
    newNode->gpa = g;
    newNode->next = NULL;
    if ( *nowNode == NULL ){
        *nowNode = newNode;
    } 
    else {
        newNode->next = *nowNode;
        *nowNode = newNode;
    }
} 

void DelNode( struct studentNode **Node ){
    struct studentNode *delNode = (*Node)->next;
    (*Node)->next = delNode->next;
} 

void GoNext( struct studentNode ***Node ) {
  **Node = (*(*Node))->next;
} 

