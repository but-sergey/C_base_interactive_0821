#include <stdio.h>

int main(int argc, const char** argv){
    char a = 11;
    char b = 15;
    printf("a = %d, b = %d\n", a, b);
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
    printf("a = %d, b = %d\n", a, b);
    a = a ^ b;
    // a = 11 (00001011)
    // b = 15 (00001111)
    // a ^ b = 00000100
    b = b ^ a;
    // b = 15 (00001111)
    // a = 4  (00000100)
    // b ^ a = 00001011
    a = a ^ b;
    // a = 4  (00000100)
    // b = 11 (00001011)
    // a ^ b = 00001111
    printf("a = %d, b = %d\n", a, b);
    
    return 0;
}