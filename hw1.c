#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    
    printf("Hello world!!!");

    return 0;
}