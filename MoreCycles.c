#include <stdio.h>
#include <locale.h>

int main(int argc, const char** argv){
    setlocale(LC_ALL, "Rus");

    // int number;
    // printf("�������, ����������, �����: ");
    // scanf("%d", &number);
    // int d = 0;
    // int i = 1;
    // while (i <= number)
    // {
    //     if (number % i++ == 0)
    //     {
    //         d++;
    //     }
    //     else
    //     {
    //         continue;
    //     }
    //     if (d == 3)
    //     {
    //         break;
    //     }
    // }
    // printf("��������� ����� %d %s�������� �������", number, (d == 2) ? "" : "�� ");

    int base = 2;
    int signigicative = 10;
    int result = 1;

    for (int i = 0; i < signigicative; i++)
    {
        result *= base;
    }
    printf("power: %d\n", result);

    return 0;
}