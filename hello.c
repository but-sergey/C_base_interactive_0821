#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    
    int variable = 70;
    variable = variable + 50;
    variable += 50;
    printf("���������� variable = %d\n", variable);
    variable /= 2;
    printf("���������� variable = %d\n", variable);
    variable /= 2;
    printf("���������� variable = %d\n", variable);

    int remainder = variable % 5;
    printf("������� �� ������� %d �� %d: %d\n", variable, 5, remainder);

    remainder++;
    printf("���������: %d", remainder);

    return 0;
}