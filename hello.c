#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    
    // printf("Hello world\n");
    // printf("This is a new row");
    // printf("This is a '\t' tab symbol");
    // printf("This is backslash \\");
    // printf("This is a terminant \0 all the other text will be ignored");
    
    // int a = 50;
    // printf("%d\n", a);
    // printf("%05d\n", a);
    // printf("%.2f\n", 5.12345);
    // printf("«аполнители - это \"%5d%%\" форматировани€ текста!", a);

    unsigned char symbol = 75;
    printf("%c\n", symbol);

    float real = 5.345f;
    double doublereal = 5.345;
    printf("%d\n", real == doublereal);

    return 0;
}