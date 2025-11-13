// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/D
#include<stdio.h>
void res(int n)
{
    if(n==0){
        return;
    }
    res(n/10);
    int lest=n%10;
    printf("%d ",lest);
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int n;
        scanf("%d",&n);
        if(n==0){
            printf("0");
        }
        res(n);
        printf("\n");
    }
    return 0;
}