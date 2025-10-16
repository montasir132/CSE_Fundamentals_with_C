#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int digit1 = n/10;
    int digit2 = n%10;
    // printf("%d%d",digit1,digit2);
    if((digit2 !=0 &&  digit1 % digit2 == 0 )||(digit1 !=0 && digit2 % digit1 == 0))
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
