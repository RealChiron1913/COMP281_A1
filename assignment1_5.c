#include <stdio.h>


int main(){
    //input until EOF
    int input;
    while ((scanf("%d", &input)) != EOF){
        printf("%c", input);//output the ASCII character
    }
    return 0;
}