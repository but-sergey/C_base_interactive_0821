#include <stdio.h>

int main()
{
    // printf("Hello world\n");
    // printf("This is a new row");
    // printf("This is a '\t' tab symbol");
    // printf("This is backslash \\");
    // printf("This is a terminant \0 all the other text will be ignored");
    
    int a = 50;
    printf("%d\n", a);
    printf("%05d\n", a);
    printf("%.2f\n", 5.12345);
    printf("«аполнители - это \"%5d%%\" форматировани€ текста!", a);

    return 0;
}