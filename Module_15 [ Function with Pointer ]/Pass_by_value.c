#include<stdio.h>
void fun(int x)
{
    x=20;
    printf("Fun Function er X er address: %p\n",&x);
}
int main()
{
    int x=10;
    fun(x);
    // printf("%d",x);
    printf("Main Function er X er address: %p\n",&x);
    return 0;
}