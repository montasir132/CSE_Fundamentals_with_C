#include<stdio.h>
#include<limits.h>
int main()
{
    //Take an array from input and print all the even numbers of that array.

    // int n;
    // scanf("%d", &n);
    // int arr[n];
    // for(int i=0; i<n; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }
    // for(int i=0; i<n; i++)
    // {
    //     if(arr[i]%2==0)
    //     {
    //         printf("%d ", arr[i]);
    //     }
    // }

    //Take an array from input and count how many odd numbers are present in that array.
    // int n,odd=0;
    // scanf("%d", &n);
    // int arr[n];
    // for(int i=0; i<n; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }
    // for(int i=0; i<n; i++)
    // {
    //     if(arr[i]%2 != 0)
    //     {
    //         printf("Odd numbers:%d \n", arr[i]);
    //         odd++;
    //     }
    // }
    // printf("Total odd numbers:%d ", odd);

    //Take an array from input and print the maximum value of that array.
    int n, valu=0, MAX=INT_MAX;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        scanf("%d", &valu);
        if( valu > MAX)
        {
            valu=MAX;
        }
    }
    printf("%d ", MAX);

    // int n, valu=0, min=INT_MIN;
    // scanf("%d", &n);
    // int ar[n];
    // for(int i=0;i<n; i++)
    // {
    //     scanf("%d", &ar[i]);
    // }
    // for(int i=0; i<n; i++)
    // {
    //     printf("%d ", ar[i]);
    // }
    return 0;
}