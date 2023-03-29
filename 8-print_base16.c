#include <stdio.h>
int main(){
    int i;
    for(i = '0'; i <= '9'; i++){
        putchar(i);
    }
    for(i = 97; i <= 102; i++){
        putchar(i);
    }
    putchar(10);
}