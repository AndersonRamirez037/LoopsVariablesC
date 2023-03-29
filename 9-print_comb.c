#include <stdio.h>
int main(){
    int i;
    for(i = '0'; i <= '9'; i++){
        putchar(i);
        if(i != '9'){
            putchar(44);
            putchar(32);
        }
    }
    putchar(10);
}