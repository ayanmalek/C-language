#include <stdio.h>

int main() {
    int ch = 97 ;   // starting ASCII value of 'a'
    
    do {
        printf("%c ", ch);   // print current character
        ch += 4;             // skip 3 alphabets (move 4 steps ahead)
    } while (ch <=122);      // loop till 'z'
    
    return 0;
}

