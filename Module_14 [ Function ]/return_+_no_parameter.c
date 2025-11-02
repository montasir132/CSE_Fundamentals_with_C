#include<stdio.h>
// return_type function_name(no parameter)
// {
    
//     return
// }
int sum()
{
    
    int a,b;
    scanf("%d %d",&a,&b);
    int valu=a+b;
    return valu;
}
int main()
{
    int valu=sum();
    printf("%d",valu);
    return 0;
}