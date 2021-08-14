#include <stdio.h>

int main(int argc, const char** argv)
{
    // char answer;
    // printf("Do you want me to salute you (y/n)? ");
    // scanf("%s", &answer);
    // if (answer == 'y')
    // {
    //     printf("Hello, user!\n");
    // }
    // else if (answer == 'n')
    // {
    //     printf("I never wanted to salute you!\n");
    // }
    // else
    // {
    //     printf("I can not understand your input\n");
    // }

    int a = 10;
    int b = 15;
    int c;

    // if (a > b)
    // {
    //     c = b;
    // }
    // else
    // {
    //     c = a;
    // }

    c = (a > b) ? b : a;
    
    printf("c = %d\n", c);
    printf("%s\n", (a > b) ? "true" : "false");

    return 0;
}