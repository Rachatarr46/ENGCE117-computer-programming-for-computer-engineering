#include <stdio.h>

void Getmessage(char **text);

int main(){
    char *str;
    int j = 0;
    scanf("%d" , &j);
    for(int i = 0; i <= j; i++){
        Getmessage(&str);
        printf("\n%s\n" , str);
    }

}
void Getmessage(char **text){
    *text = new char[15];
    gets(*text);
    
}