#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    
    int variable = 70;
    printf("Переменная vatiable = %d\n", variable);
    variable = variable + 50;
    printf("Переменная vatiable = %d\n", variable);
    variable += 50;
    printf("Переменная vatiable = %d\n", variable);

    return 0;
}