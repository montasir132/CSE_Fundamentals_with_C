#include<stdio.h>
void hello()
{
    printf("Hello\n");
    hello(); // nijake  infinite kore
}

int main()
{
    printf("Hi\n");
    hello();
    return 0;
}