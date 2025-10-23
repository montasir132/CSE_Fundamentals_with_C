#include<stdio.h>
#include<limits.h>
int main()
{
    //Take an array from input and print all the even numbers of that array.

    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            printf("Even numbers:%d\n", arr[i]);
        }
    }

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

    // int n;
    // scanf("%d", &n);
    // int arr[n];
    // for(int i = 0; i < n; i++) {
    //     scanf("%d", &arr[i]);
    // }
    // int MAX = INT_MIN;
    // for(int i = 0; i < n; i++) {
    //     if(arr[i] > MAX) {
    //         MAX = arr[i];
    //     }
    // }
    // printf("%d\n", MAX);

//Take an array from input and print the minimum value of that array.

    // int n;
    // scanf("%d", &n);
    // int ar[n];
    // for(int i = 0; i < n; i++) {
    //     scanf("%d", &ar[i]);
    // }
    // printf("\n");
    // // Find the minimum value
    // int min = INT_MAX;
    // for(int i = 0; i < n; i++) {
    //     if(ar[i] < min) {
    //         min = ar[i];
    //     }
    // }
    // printf("Minimum value: %d\n", min);

    return 0;
}