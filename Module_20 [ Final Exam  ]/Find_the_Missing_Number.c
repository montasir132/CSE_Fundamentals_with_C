// https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-batch-08/challenges/find-the-missing-number-11-3
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        double m,a,b,c;
        scanf("%lf %lf %lf %lf",&m,&a,&b,&c);
        double mul=a*b*c;
        double div=m/mul;
        long long int ans=(long long int)div; ;
        if((long long int)div!=div){
            printf("-1");
        }
        else{
            printf("%lld",ans);
        }
        printf("\n");
    }    
    return 0;
}