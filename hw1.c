/*
���� "������ �. ������������� ����"
������������ ������ � ����� 1
��� ������
Visual Studio Code 1.59.0
*/
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    
    printf("Hello world!!!\n");

    int num;
    printf("������� ����� �����: ");
    scanf("%d", &num);
    printf("�� �����: %d, ������� ����� �����: %d\n", num, num * num);

    return 0;
}