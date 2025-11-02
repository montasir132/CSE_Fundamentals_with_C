#include<stdio.h>
// return_type function_name(parameter)
// {
    
//     return
// }

// r8 way

int sum(int num1,int num2)
{
    int ans=num1+num2;
    return ans;
}
int sub(int num1,int num2)
{
    int ans=num1-num2;
    return ans;
}
int mul(int num1,int num2)
{
    int ans=num1*num2;
    return ans;
}
int div(int num1,int num2)
{
    int ans=num1/num2;
    return ans;
}
int main()
{
    int a,b;
    scanf("%d %d", &a,&b);
    int valu=sum(a,b); //input val
    int valu1=sub(a,b);
    int valu2=mul(a,b);
    int valu3=div(a,b);
    printf("sum = %d\nsub = %d\nmul = %d\ndiv = %d",valu,valu1,valu2,valu3);
    return 0;
}


// right way

// int sum(int num1,int num2); //
// int main()
// {
//     int valu=sum(10,5); //input val
//     printf("%d",valu);
//     return 0;
// }
// int sum(int num1,int num2) //
// {
//     int ans=num1+num2;
//     return ans;
// }


// wong way

// int main()
// {
//     int valu=sum(10,5); //input val
//     printf("%d",valu);
//     return 0;
// }
// int sum(int num1,int num2)
// {
//     int ans=num1+num2;
//     return ans;
// }