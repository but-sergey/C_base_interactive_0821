#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    
    int a = 10;
    printf("Переменная a имеет значение: %d\n", a);
    printf("Переменная a хранится по адресу: %p\n", &a);

    return 0;
}