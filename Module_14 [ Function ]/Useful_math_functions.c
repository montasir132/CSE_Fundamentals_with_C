#include<stdio.h>
#include<math.h>
int main()
{
    int a=ceil(4.5); // 5
    printf("ceil => %d\n",a);

    int b=floor(4.5); // 4
    printf("floor => %d\n",b);

    int c=round(4.55); // 5
    printf("round => %d\n",c);

    int d=sqrt(14); // 3
    printf("sqrt => %d\n",d);

    int e=pow(3,3); // 27
    printf("pow => %d\n",e);

    int f= abs(-100); // 100
    printf("abs => %d\n",f);
    return 0;
}