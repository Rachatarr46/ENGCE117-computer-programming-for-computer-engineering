#include <stdio.h>

void Gettext(char *text);
int main(){
    char str[20];
    Gettext(str);
    printf("text : %s\n" , str);
    return 0;
    
}
void Gettext(char *text){
    gets(text);


}