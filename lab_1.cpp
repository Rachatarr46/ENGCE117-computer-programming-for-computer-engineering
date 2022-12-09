#include<stdio.h>

int main()
{ 
    int n = 20 ;
    float nm = 45.8 ;
    
    int *ptr1 = &n ;
    float *ptr2 ;
    ptr2 = &nm ;
    printf("%d\n", *ptr1) ;
    printf("%.1f\n", *ptr2) ;
    return 0 ;
    
}