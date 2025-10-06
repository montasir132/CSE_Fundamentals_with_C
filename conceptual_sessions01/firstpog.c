// - What is Programming? what is programming
// language?
// - How C language works?
// - Data Types
// - variables
// - Operators
// - conditional statements
// - Problem solving

#include<stdio.h>
int main()
{
    // int a = 10;
    // printf("%d\n", a);

    // int a;
    // scanf("%d", &a);
    // printf("%d\n", a);

    // char a;
    // scanf("%c", &a);
    // printf("%c\n", a);

    // float c;
    // scanf("%f", &c);
    // printf("%f\n", c);

    // int a= 2147483647;
    // printf("%d\n", a);

    // int a=20, b=10;
    // printf("sum:%d\n", a+b);
    // printf("%d\n", a-b);
    // printf("%d\n", a*b);
    // printf("%d\n", a/b);
    // printf("%d\n", a%b);


 // <     <=     >     >=     ==     !=
// true or false rerurn kore
// relational operator


    // int a, b;
    // scanf("%d%d", &a, &b);
    // if(a>=b)
    // {
    //     printf("a boro ba soman\n");
    // }
    // else
    // {
    //     printf("b boro\n");
    // }

    // if,else & ladder 


    // int age;
    // scanf("%d", &age);
    // if(age<=12){
    //     printf("kid\n");
    // }else if(age <= 17){
    //     printf("teenager\n");
    // }else if(age <= 25){
    //     printf("young adult\n");
    // }else{
    //     printf("adult\n");
    // }
    // if(age < 18){
    //     printf("vote dite parbe na\n");
    // }
    // else{
    //     printf("vote dite parbe\n");
    // }


    // ---ladder if---


    // int tk;
    // scanf("%d", &tk);
    // if(tk<=10){
    //     printf("ice-cream\n");
    // }
    // else if(tk<=20){
    //     printf("sandwich\n");
    // }
    // else if(tk<=50){
    //     printf("chocolate\n");
    // }
    // else{
    //     printf("kiso kabo na\n");
    // }


    // ---nested if---


    // int tk;
    // scanf("%d", &tk);
    // if(tk>=5000){
    //     printf("TV kinbo\n");
    //     if(tk>=20000){
    //     printf("laptop kinbo\n");
    // }
    // else if(tk>=10000){
    //     printf("mobile kinbo\n");
    // }
    // else if(tk>=50000){
    //     printf("tablet kinbo\n");
    // }
    // else{
    //     printf("ar kiso kinbo na\n");
    // }
    // }
    // else{
    //     printf("kiso kinbo na\n");
    // }


    // ---nested if---
    // if er modde arek ta if

    // int taka;
    // int khoroch;
    // scanf("%d %d", &taka , &khoroch);
    // if (taka>=5000)
    // {
    //     printf( "cox's bazar jabo\n");
    //     int obosisto = taka - khoroch;
    //     if (obosisto>=500) 
    //     {
    //         printf("saint martin o jabo");
    //     }
    // }
    // else {
    //     printf( "Jabo na kuthao");
    // }



    // ---Problem:---
    // check if a number is even or odd
    // if odd then check if it's divisible by 3
    // if even then check if it's divisi Ibe by 6


    int a;
    scanf("%d", &a);
    if(a%2==0){
        printf("even\n");
        if(a%6==0){
            printf("divisible by 6\n");
        }
        else{
            printf("not divisible by 6\n");
        }
    }
    else{
        printf("odd\n");
        if(a%3==0){
            printf("divisible by 3\n");
        }
        else{
            printf("not divisible by 3\n");
        }
    }
    return 0;
}