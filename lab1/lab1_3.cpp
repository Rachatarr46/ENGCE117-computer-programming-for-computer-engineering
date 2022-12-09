#include <stdio.h>

void setup(int a)
{ 
    printf("pointer value  %d\n", a);

}

int main()
{
    void (*setup_ptr)(int) = setup; //* removed
    setup_ptr(10); //* removed
    return 0 ;

}