// 65543206031-8 นาย รชตะ รุ่งราตรี section 1
// https://github.com/Rachatarr46/ENGCE117-computer-programming-for-computer-engineering/tree/main/practical
// https://youtu.be/LzmiE2KsBxM
#include<stdio.h>
#include<stdlib.h>

struct node {
     int data ;
     struct node *nextnode;

};  

void Addnode(struct node **mm , int data){
    while(*mm != NULL){
        mm = &(*mm)->nextnode ;
        } //end while 

     *mm = new struct node ;
    (*mm)->data = data ;
    (*mm)->nextnode = NULL ;

} //end void Addnode 

void update(struct node **mm , int data , int data2);
void ShowAll(struct node *mm);



int main(){ 
    struct node*start;
    start = NULL ;
    Addnode(&start , 10);
    Addnode(&start , 20);
    Addnode(&start , 30);
    Addnode(&start , 40);
    ShowAll(start);
    update(&start , 10 , 99);
    ShowAll(start);
    update(&start , 10 , 98);
    ShowAll(start);
}

void ShowAll( struct node *mm){
	printf("\n");
    while(mm != NULL){
		 printf("%d " , mm->data );
        mm = mm->nextnode ;
	} //end while
	printf(" ");

	}

void update(struct node **mm,int data,int data2){
	while(*mm != NULL){
		if ((*mm)->data == data ){
			break;
		}
		mm = &(*mm)->nextnode;
	}
		
		if((*mm)!= NULL){
		(*mm)->data = data2;
	}	
}