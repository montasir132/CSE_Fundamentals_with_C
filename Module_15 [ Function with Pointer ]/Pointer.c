#include<stdio.h>
int main()
{
    int x=11;
    printf("%d\n",x);
    printf("x address=> %p\n",&x); // x address

    int * ptr;
    ptr=&x;
    printf("ptr sahaje x address=> %p\n",ptr); // x address
    printf("ptr address=> %p\n",&ptr);// ptr address
    printf("ptr x valu derefares=> %d\n",*ptr); // derefares

    *ptr=200;
    printf("change x valu=> %d\n",x);

    return 0;
}