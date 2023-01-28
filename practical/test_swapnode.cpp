#include<stdio.h>
#include<stdlib.h>

struct node {
	int data ;
	struct node *nextnode ;
};

void ShowAll(struct node *move);
void Swapnode(struct node **move , int data , int temp);

void Addnode(struct node **move , int data){
	while(*move != NULL){
	move = &(*move)->nextnode ; 
} //end while 

	*move = new struct node ;
	(*move)->data = data ;
	(*move)->nextnode = NULL ;
} //end Addnode 

int main(){
	struct node *start ;
	start = NULL ;
	Addnode(&start , 10);
	Addnode(&start , 20);
	Addnode(&start , 30);
	Addnode(&start , 40);
	Swapnode(&start,20,30);
	ShowAll(start);
	Swapnode(&start,40,10);
	ShowAll(start);
	
}

void ShowAll(struct node *move){
	printf("\n");
	while(move != NULL){
		printf("%d " , move->data);
		move = move->nextnode ;
	} 
	printf(" ");
}//end void ShowAll

void Swapnode(struct node **move , int data , int temp){
	while(*move != NULL){
		if((*move)->data == data){
			(*move)->data = temp;
		}//end if
		else if((*move)->data == temp){
			(*move)->data = data;
		}//end else if
		move = &(*move)->nextnode;
	} //end while
}
