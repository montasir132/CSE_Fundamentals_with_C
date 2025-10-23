// G_Palindrome_Array https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int ar[n];
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&ar[i]);
//     }
//     int indecator=1;//test
//     int l=0,r=n-1;
//     while(l < r)
//     {
//         if(ar[l] != ar[r])
//         {
//             indecator=0;
//             break;
//         }
//         l++,r--;
//     }
//     if(indecator==1)
//     {
//         printf("YES");
//     }
//     else{
//         printf("NO");
//     } 
//     return 0;
// }

// Palindrome string https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I
// #include<stdio.h>
// int main()
// {
//     char s[1001];
//     scanf("%s",&s);
//     int len = strlen(s);
//     int l=0;
//     int r=len-1;
//     int palindrome = 1;
//     while(l<r)
//     {
//         if(s[l] != s[r])
//         {
//             palindrome = 0;
//             break;
//         }
//         l++,r--;
//     }
//     if(palindrome)
//     {
//         printf("YES");
//     }
//     else
//     {
//         printf("NO");
//     }
//     return 0;
// }


// Smallest Pair https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I
// #include<stdio.h>
// #include<limits.h>
// int main()
// {
//     int t;
//     scanf("%d",&t);
//     // for(int x=1;x<=t;t--)
//     while(t--)
//     {
//         int n;
//         scanf("%d",&n);
//         int arr[n];
//         for(int i=0;i<n;i++)
//         {
//             scanf("%d",&arr[i]);
//         }
//         int res=INT_MAX;//2*10^9
//         for(int i=0;i<n-1;i++)
//         {
//             for(int j=i+1;j<n;j++)
//             {
//                 // printf("%d-%d\n",arr[i],arr[j]);
//                 int val = arr[i]+arr[j]+j-i;
//                 if(val<res)
//                 {
//                     res=val;
//                 }
//             }
//         }
//         printf("%d\n",res);
//     }
//     return 0;
// }

// D. Strings https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[11],b[11];
//     scanf("%s %s",&a,&b);
//     int len_a =strlen(a), len_b=strlen(b);
//     printf("%d %d\n",len_a,len_b);
//     printf("%s%s\n", a,b);
//     char tem=a[0],tmp=b[0];
//     a[0]=tmp;
//     b[0]=tem;
//     printf("%s %s",a,b);
//     return 0;
// }

// Way Too Long Words https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     {
//         char s[101];
//         scanf("%s",&s);
//         int len =strlen(s);
//         if(len<=10)
//         {
//             printf("%s\n",s);
//         }
//         else{
//             printf("%c%d%c\n",s[0],len-2,s[len-1]);
//         }
//     }
//     return 0;
// }

// G_Conversion https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G
// #include<stdio.h>
// int main()
// {
//     char s[100001];
//     scanf("%s",&s);
//     for (int i = 0; s[i] != '\0'; i++)
//     {
//     if (s[i] == ',')
//     {
//         s[i] = ' ';
//     }
//     else if (s[i] >= 'a' && s[i] <= 'z')
//     {
//         s[i]=s[i]-32;
//     }
//     else if (s[i] >= 'A' && s[i] <= 'Z')
//     {
//         s[i]=s[i]+32;
//     }
    
//     }
//     printf("%s",s);
//     return 0;
// }