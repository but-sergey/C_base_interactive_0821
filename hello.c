#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    
    int a = 10;
    printf("���������� a ����� ��������: %d\n", a);
    printf("���������� a �������� �� ������: %p\n", &a);

    return 0;
}