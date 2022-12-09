#include<stdio.h>

int main()
{ 
    int num[5] = {10, 20, 30, 40, 50};
    int *Pointer = num ;
   

    printf("1state -> %d\n" , *Pointer);
    Pointer++;
    printf("2state -> %d\n" , *Pointer);
    Pointer+=3;
    printf("5state -> %d\n" , *Pointer);
    Pointer--;
    printf("4state -> %d\n" , *Pointer);
    return 0;
   
}
