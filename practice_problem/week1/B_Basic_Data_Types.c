#include<stdio.h>
int main()
{
    int a;
    long long int b;
    char ch;
    float f;
    double d;
    scanf("%d %lld %c %f %lf",&a, &b, &ch, &f, &d);
    printf("%d\n%lld\n%c\n%.2f\n%.1lf\n", a, b, ch, f, d);
    return 0;
}