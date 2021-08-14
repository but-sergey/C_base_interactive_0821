/*
Курс "Основы С. Интерактивный курс"
Практическая работа к уроку 2
Бут Сергей
Visual Studio Code 1.59.0
*/
#include <stdio.h>
#include <locale.h>

int main(int argc, const char** argv){
    setlocale(LC_ALL, "Rus");

    // Задание 1
    int num;
    printf("Введите, пожалуйста, число: ");
    scanf("%d", &num);
    printf("Число %d %sвходит в диапазон от 0 до 100 включительно.\n", num, (num >= 0 && num <= 100) ? "" : "не ");

    return 0;
}