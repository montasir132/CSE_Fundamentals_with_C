// https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-batch-08/challenges/difference-array
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n],b[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(int i=0;i<n;i++){
            b[i]=a[i];
        }
        // ascending sort kore
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if (b[i] > b[j]) {
                    int tmp=b[i];
                    b[i]=b[j];
                    b[j]=tmp;
                }
            }
        }
        for(int i=0;i<n;i++){
            a[i]=abs(a[i]-b[i]);
        }
        for(int i=0;i<n;i++){
            printf("%d ",a[i]);
        }
        printf("\n");
    }
    return 0;
}