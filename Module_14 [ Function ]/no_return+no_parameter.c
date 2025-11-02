// #include<stdio.h>
// // return_type nai function_name(no parameter)
// // {
    
// //     return
// // }
// void sum()
// {
//     int a,b;
//     scanf("%d %d",&a,&b);
//     int ans=a+b;
//     printf("%d",ans);
//     return; //offsonal
// }
// int main()
// {
//     sum();
//     return 0;
// }


#include<stdio.h>
// return_type nai function_name(no parameter)
// {
    
//     return
// }
int sum(int x,int y)
{
    int res=x+y;
    return res;  
}
int main()
{
    printf("%d",sum(5,6));
    return 0;
}