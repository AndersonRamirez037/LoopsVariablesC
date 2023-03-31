#include <stdio.h>
int main(){
    int a, b; 
    for(a = '0'; a <= '8'; a++){
        for(b = a + 1; b <= '9'; b++){
            putchar(a);
            putchar(b);
            putchar(',');
            putchar(' ');
        }
    }
    putchar('\n');
}