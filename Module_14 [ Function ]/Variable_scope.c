#include<stdio.h>
// return_type function_name(parameter)
// {
    
//     return
// }

// r8 way
int x=10; // global variable
void sum()
{
    printf("sum => %d\n",x);
}
int main()
{
    sum();
    printf("main => %d\n",x);
    
    return 0;
}