//-----Today's Outline -------
// 1.Online judge issues
// 2. Type casting
// 3. scope

// 4. Problem solving 

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int x,count1=0,counter=0;
//     for(int i=1;i<=n;i++)
//     {
//         scanf("%d", &x);
//         if(x>0)
//     {
//         count1++;
//     }else if(x<0){
//         counter++;
//     }
//     }
//     printf("pos = %d\n neg = %d",count1, counter );
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     // implicit type convarson 
//     int a=5;
//     int b=2;
//     float c=a/b;
//     float d=5/2;
//     float e=5/2.0;
//     // Explicit type convarson 
//     float f=(float)5/2;
//     printf("%f %f %f %f\n", c, d, e, f);//2.000000 2.000000 2.500000 2.500000
//     double g =5.234;
//     double h = (int) g;
//     printf("%lf\n",h); //5.000000

//     int i=100000;
//     int j=100000;
//     // long long int k=(long long int)i * j;
//     long long int k=1.0*i * j;
//     printf("%lld\n", k);//10000000000
//     return 0;
// }

// #include<stdio.h>
// // global scope 
// int x=99;
// int main()
// {
//     int a=5;
//     if(a%2==0)
//     {
//         // local scope 
//         int b=7;
//         printf("%d %d \n", a,b);
//     }else{
//         int b=6;
//         printf("%d %d \n", a,b);//5 6
//     }
//     printf("%d", x);//99
//     return 0;
// }

// A. Ambitious Kid https://codeforces.com/contest/1866/problem/A
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int x;
//     int mnimam = 100000+5;
//     for(int i=1; i<=n; i++)
//     {
//         scanf("%d", &x);
//         if(x<0)
//         {
//             x= x*-1;
//         }
//         if(x<mnimam)
//         {
//             mnimam=x;
//         }
        
//     }
//     printf("%d",mnimam);
//     return 0;
// }

// #include<stdio.h>
// #include<limits.h>
// int main()
// {
//     int b;
//     scanf("%d", &b);
//     int y;
//     int min= INT_MAX;
//     for(int i=1;i<=b;i++)
//     {
//         scanf("%d", &y);
//         if(y<0)
//         {
//             y*=-1;
//         }
//         if(y<min)
//         {
//             min=y;
//         }
        
//     }
//     printf("%d",min);
//     return 0;
// }

// #include<stdio.h>
// #include<limits.h>
// #include<stdlib.h>
// int main()
// {
//     int b;
//     scanf("%d", &b);
//     int y;
//     int min= INT_MAX;
//     for(int i=1;i<=b;i++)
//     {
//         scanf("%d", &y);
//         y=abs(y);
//         if(y<min)
//         {
//             min=y;
//         }
//     }
//     printf("%d",min);
//     return 0;
// }

// I. Lucky Numbers https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I
#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int first=x/10;
    int last=x%10;
    if(last%first==0 || first%last==0)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}