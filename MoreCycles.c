#include <stdio.h>
#include <locale.h>

int main(int argc, const char** argv){
    setlocale(LC_ALL, "Rus");

    int number;
    printf("�������, ����������, �����: ");
    scanf("%d", &number);
    int d = 0;
    int i = 1;
    while (i <= number)
    {
        if (number % i++ == 0)
        {
            d++;
        }
        else
        {
            continue;
        }
        if (d == 3)
        {
            break;
        }
    }
    printf("��������� ����� %d %s�������� �������", number, (d == 2) ? "" : "�� ");

    return 0;
}