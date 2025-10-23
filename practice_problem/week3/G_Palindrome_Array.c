// // https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int org[n];
//     int cpy[n];
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&org[i]);
//         cpy[i]=org[i];

//     }
//     int left = 0,right = n-1;
//     while(left<right)
//     {
//         int tmp=org[left];
//         org[left]=org[right];
//         org[right]=tmp;
//         left++;
//         right--;
//     }

//     int flag=1;
//     for(int i=0;i<n;i++)
//     {
//         if(org[i] != cpy[i])
//         {
//             flag=0;
//             break;
//         }
        
//     }

//     if(flag==1)
//     {
//         printf("YES");
//     }
//     else{
//         printf("NO");
//     }
//     return 0;
// }

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int indecator=1;//test
    int l=0,r=n-1;
    while(l < r)
    {
        if(ar[l] != ar[r])
        {
            indecator=0;
            break;
        }
        l++,r--;
    }
    if(indecator==1)
    {
        printf("YES");
    }
    else{
        printf("NO");
    } 
    return 0;
}