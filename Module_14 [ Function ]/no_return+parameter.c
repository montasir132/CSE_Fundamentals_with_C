#include<stdio.h>
// return_type nai function_name(parameter)
// {
    
//     return
// }
void sum(int num1,int num2)
{
    int ans=num1+num2;
    // return; // break ar moto kaj korba 
    printf("%d",ans);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    sum(a,b);
    return 0;
}