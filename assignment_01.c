// https://www.hackerrank.com/contests/assignment-01-a-introduction-to-c-programming-a-batch-08/challenges

// 1qs
// #include<stdio.h>
// int main(){
//     printf("Hello, world! I am learning C programming language. ^_^\n");
//     return 0;
// }

// 2qs
// #include<stdio.h>
// int main(){
//     long long int a,b;
//     scanf("%lld %lld", &a, &b);
//     printf("%lld\n", a*b);
//     return 0;
// }

// 3qs
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d", &n);
//     if(n % 3 == 0)
//     {
//         printf("YES\n");
//     }
//     else{
//         printf("NO\n");
//     }
//     return 0;
// }

// 4qs
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d", &n);
//     for(int i=1; i<=n; i++)
//     {
//         if(i % 3 == 0 && i % 7 == 0)
//         {
//             printf("%d\n", i);
//         }
        
//     }
    
//     return 0;
// }

// 5qs
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if(n > 1000){
        printf("I will buy Punjabi\n");
        if(n - 1000 >= 500){
            printf("i will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    }else{
        printf("Bad luck!");
    }
    return 0;
}
