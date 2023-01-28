#include<stdio.h>
#include<stdlib.h>

struct node{
	int data ;
	struct node *nextnode ;
	
};

void Addnode(struct node **move , int data){
	while(*move != NULL){
		move = &(*move)->nextnode ;
	} //end while 
	
	*move = new struct node ;
	(*move)->data = data ;
	(*move)->nextnode = NULL ;
	
} //end Addnode

void ShowAll(struct node *move);
void Showback(struct node **move);


int main(){
	struct node *start ;
	start = NULL ;
	Addnode(&start , 10);
	Addnode(&start , 20);
	Addnode(&start , 30);
	Addnode(&start , 40);
	ShowAll(start);
	Showback(&start);
	
}

void ShowAll(struct node *move){
	printf("\n");
	while(move != NULL){
		printf("%d " , move->data);
		move = move->nextnode ;
		
		} //end while 
	printf(" ");
	
} //end ShowAll

void Showback(struct node **move){
	struct node *countback = NULL ;
	struct node *now = *move ;
	struct node *nextnode = NULL ;
	
	while(now != NULL){
		nextnode = now->nextnode ;
		now->nextnode = countback;
		countback = now ;
		now = nextnode ; 
	}
	ShowAll(countback);
}
