#include<stdio.h>
int main(){
    int Tk;
    scanf("%d", &Tk);
    if(Tk>=100){
        printf("Borgar khabo\n");
    }
    else if(Tk>=50){
        printf("Fuska khabo\n");
    }
    else if(Tk>=30){
        printf("Chotpoti khabo\n");
    }
    else{
        printf("kiso khabo na\n");
    }
    return 0;
}
