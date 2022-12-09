#include<stdio.h>
void swap(int &x , int &y){
    int temp;

    temp = x; //* เก็บค่า pointer x ไว้ที่ temp
    x = y;   //* รับค่า pointer y เก็บไว้ที่ pointer x
    y = temp; //* รับค่า temp เก็บไว้ที่ pointer y เป็นการสลับค่ากัน

}

int main(){
    int a = 100;
    int b = 200;
    
    printf("Before swap, value of a : %d\n", a);
    printf("Before swap, value of b : %d\n", b);

    swap(a , b);

    printf("After swap , value of a : %d\n", a);
    printf("After swap , value of b : %d\n", b);
    
    return 0 ;
    
}

