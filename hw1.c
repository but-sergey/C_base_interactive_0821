/*
Курс "Основы С. Интерактивный курс"
Практическая работа к уроку 1
Бут Сергей
Visual Studio Code 1.59.0
*/
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    
    printf("Hello world!!!\n");

    int num;
    printf("Введите целое число: ");
    scanf("%d", &num);
    printf("Вы ввели: %d, квадрат этого числа: %d\n", num, num * num);

    return 0;
}