/*
���� "������ �. ������������� ����"
������������ ������ � ����� 2
��� ������
Visual Studio Code 1.59.0
*/
#include <stdio.h>
#include <locale.h>

int main(int argc, const char** argv){
    setlocale(LC_ALL, "Rus");

    // ������� 1
    int num;
    printf("�������, ����������, �����: ");
    scanf("%d", &num);
    printf("����� %d %s������ � �������� �� 0 �� 100 ������������.\n", num, (num >= 0 && num <= 100) ? "" : "�� ");

    return 0;
}