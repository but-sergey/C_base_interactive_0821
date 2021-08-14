#include <stdio.h>

int main(int argc, const char** argv){
    int a = 10;
    int b = 20;
    while (a < b)
    {
        printf("%d ", ++a);
    }
    

    return 0;
}