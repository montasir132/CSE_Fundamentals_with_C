// no return+ parameter

// #include<stdio.h>
// void evenorodd(int x)
// {
//     if(x%2==0)
//     {
//         printf("%d is even",x);
//     }
//     else{
//         printf("%d is odd",x);
//     }
// }
// int main()
// {
//     int x;
//     scanf("%d",&x);

//     evenorodd(x);
//     return 0;
// }


// return+ parameter

// #include<stdio.h>
// int evenorodd(int x)
// {
//     if(x%2==0)
//     {
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// int main()
// {
//     int x;
//     scanf("%d",&x);

//     int res=evenorodd(x);
//     if(res==1)
//     {
//         printf("%d is even",x);
//     }
//     else{
//         printf("%d is odd",x);
//     }
//     return 0;
// }



// no return+ no parameter

// #include<stdio.h>
// void weelcameMsg()
// {
//     printf("Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.");
// }
// int main()
// {
//     weelcameMsg();
//     return 0;
// }




// return+ no parameter

// #include<stdio.h>
// int sum()
// {
//     int n;
//     scanf("%d",&n);
//     int sum =0;
//     for(int i=1;i<=n;i++)
//     {
//         sum+=i;
//     }
//     return sum;
// }
// int main()
// {
//     int res =sum();
//     printf("%d",res);
//     return 0;
// }



#include<stdio.h>
void fun(double x)
{
    
    printf("%lf",x);
}
int main()
{
    double x;
    scanf("%lf",&x);
    fun(x);
    return 0;
}