#include<stdio.h>
void hello(int i)
{
    if(i==6)
    {
        return;
    }
    hello(i+1); 
    printf("%d\n",i);

}

int main()
{
    int i=1;
    hello(i);
    return 0;
}


// #include<stdio.h>
// void hello(int i)
// {
//     if(i==0) // Condition
//     {
//         return;
//     }
//     printf("%d\n",i);
//     hello(i-1); // increment decrement
// }

// int main()
// {
//     int i=5; // Initialization 
//     hello(i);
//     return 0;
// }