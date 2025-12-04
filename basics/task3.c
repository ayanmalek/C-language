#include <stdio.h>

int main() {
    int ch = 97 ; 
    
    
    do {
        printf("%c ", ch);   
        ch += 4;             
    } while (ch <=122);
    
    return 0;
}

