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

    // int base = 2;
    // int signigicative = 10;
    // int result = 1;

    // for (int i = 0; i < signigicative; i++)
    // {
    //     result *= base;
    // }
    // printf("power: %d\n", result);

    float first;
    float second;
    float result;
    unsigned char operator;
    
    printf("�������, ����������, ������� �������: ");
    scanf("%f", &first);
    fseek(stdin, 0, SEEK_END);
    printf("�������, ����������, ��������: ");
    scanf("%c", &operator);
    if (operator == '/')
    {
        do{
            printf("�������, ����������, ������ �������: ");
            scanf("%f", &second);
        } while (second == 0);
    }
    else
    {
            printf("�������, ����������, ������ �������: ");
            scanf("%f", &second);
    }
    switch (operator)
    {
        case '*':
            result = first * second;
            printf("%f %c %f = %f\n", first, operator, second, result);
            break;
        case '/':
            result = first / second;
            printf("%f %c %f = %f\n", first, operator, second, result);
            break;
        case '-':
            result = first - second;
            printf("%f %c %f = %f\n", first, operator, second, result);
            break;
        case '+':
            result = first + second;
            printf("%f %c %f = %f\n", first, operator, second, result);
            break;
        default:
            printf("����������� ��������: %c", operator);
    }
 
    return 0;
}