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
    /*
    int num;
    printf("Введите, пожалуйста, число: ");
    scanf("%d", &num);
    printf("Число %d %sвходит в диапазон от 0 до 100 включительно.\n", num, (num >= 0 && num <= 100) ? "" : "не ");
    */

    // Задание 2
    /*
    int num;
    int count = 10;
    float average = 0.0f;
    printf("Введите последовательно %d чисел:\n", count);
    for (int i = 1; i <= count; i++){
        printf("Число %d: ", i);
        scanf("%d", &num);
        average += num;
    }
    average /= count;
    printf("Среднее арифметическое введенных чисел: %f", average);
    */

    // Задание 3
    ///*
    int num;
    int max = 1000;
    do{
        printf("Введите число не больше %d: ", max);
        scanf("%d", &num);

    } while (num > max);
    
    printf("Положительные четные числа до %d: ", num);
    for (int i = 2; i <= num; i += 2){
        printf("%d%s", i, (i == num) ? ".\n" : ", ");
    }
    //*/

    return 0;
}