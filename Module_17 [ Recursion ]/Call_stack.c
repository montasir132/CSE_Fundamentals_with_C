#include<stdio.h>
void mallo()
{
    printf("Mello\n");
}

void gello()
{
    printf("Gallo\n");
    mallo();
}

void hello()
{
    printf("Hello\n");
    gello();
}

int main()
{
    printf("Hi\n");
    hello();
    return 0;
}