#include<stdio.h>
int main()
{
    int a[5]={20,30,40,50,60};
    printf("Array er 0th index er address: %p\n",&a[0]);
    // printf("Array er 1th index er address: %p\n",&a[1]);
    // printf("Array er 2th index er address: %p\n",&a[2]);
    // printf("Array er 3th index er address: %p\n",&a[3]);
    // printf("Array er 4th index er address: %p\n",&a[4]);
    printf("Array er a er nam address: %p\n",a);
    printf("Array er a er nam dereference: %d\n",*a);
    printf("No Cheng: \n");
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nCheng: \n");
    *a=10;
    *(a+1)=205;
    *(a+2)=300;
    *(a+3)=401;
    *(a+4)=5210;
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}