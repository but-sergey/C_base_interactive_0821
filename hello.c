#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    
    int a = 10;
    printf("Переменная a имеет значение: %d\n", a);
    printf("Переменная a хранится по адресу: %p\n", &a);
    int input;
    printf("Введите, пожалуйста, число: ");
    scanf("%d", &input);
    printf("Вы ввели число %d, мы удвоили его для Вас, и получилось: %d\n", input, input*2);

    return 0;
}