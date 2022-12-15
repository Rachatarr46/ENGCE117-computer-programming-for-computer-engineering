#include <stdio.h>

void Getmessage(char **text)

int main(){
    char *str;
    Getmessage(&str);
    printf("\n%s\n" , str);
    return 0;
    
}
void Getmessage(char **text){
    *text = new char[20];
    gets(*text);
    
}
