#include <stdio.h>
int main(){
    int a;
    for(a = 97; a < 123; a++){
        if(a == 101 || a== 113){
            continue;
        }
        putchar(a);
    }
    putchar(10);
}