#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    
    int a = 10;
    printf("���������� a ����� ��������: %d\n", a);
    printf("���������� a �������� �� ������: %p\n", &a);
    int input;
    printf("�������, ����������, �����: ");
    scanf("%d", &input);
    printf("�� ����� ����� %d, �� ������� ��� ��� ���, � ����������: %d\n", input, input*2);

    return 0;
}