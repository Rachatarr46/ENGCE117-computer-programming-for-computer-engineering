#include<stdio.h>

void swap(int i_sw , int j_sw)
{ 
    int temp;
    
    temp = i_sw;
    i_sw = j_sw;
    j_sw = temp;
    
    return;
}
int main()
{ 
    int i = 100;
    int j = 200;

    printf("Before swap: value of i : %d\n", i);
    printf("Before swap: value of j : %d\n", j);
    
    swap(i , j);

    printf("After swap: value of i : %d\n", i);
    printf("After swap: value of j : %d\n", j);

    return 0;

}