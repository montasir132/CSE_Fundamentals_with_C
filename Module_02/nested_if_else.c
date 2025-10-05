#include<stdio.h>
int main(){
    int Tk;
    scanf("%d", &Tk);
    if(Tk>=5000){
        printf("Cox's Bazar jabo\n");
        if(Tk>=10000){
            printf("saint martin jabo\n");
        }
        else{
            printf("saint martin jabo na\n");
        }
    }
    else{
        printf("kothao jabo na\n");
    }
    return 0;
}
