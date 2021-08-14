#include <stdio.h>

int main(int argc, const char** argv)
{
    char answer;
    printf("Do you want me to salute you (y/n)? ");
    scanf("%s", &answer);
    if(answer == 'y')
    {
        printf("Hello, user!\n");
    }
    else
    {
        printf("I never wanted to salute you!\n");
    }

    return 0;
}