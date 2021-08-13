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
    
    // printf("Hello world!!!\n");

    // int num;
    // printf("Введите целое число: ");
    // scanf("%d", &num);
    // printf("Вы ввели: %d, квадрат этого числа: %d\n", num, num * num);

    float R1 = 1.0f;
    float R2 = 3.0f;
    float Ui = 4.0f;
    float Uo = 1.0f;

    printf("Начальные данные: R1 = %.1f, R2 = %.1f, Ui = %.1f, Uo = %.1f\n", R1, R2, Ui, Uo);
    printf("Расчеты:\n");

    float Uo_ = Ui * (R1 / (R1 + R2));
    float Ui_ = Uo * (R1 + R2) / R1;
    float R1_ = R2 * Uo / (Ui - Uo);
    float R2_ = R1 * (Ui - Uo) / Uo;

    printf("Uo = %.1f\n", Uo_);
    printf("Ui = %.1f\n", Ui_);
    printf("R1 = %.1f\n", R1_);
    printf("R2 = %.1f\n", R2_);

    return 0;
}