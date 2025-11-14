//          *
//         ***
//        *****
//       *******
//      *********
//     ***********
//    *************
//   ***************
//  *****************
// *******************
//      *********
//      *********
//      *********
//      *********
//      *********
// https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-batch-08/challenges/magical-tree-3
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int r=((n-1)/2)+6;
    int spes=r-1;
    int star=1;
    for(int i=1; i<=r; i++){
        for(int j=1;j<=spes;j++){
            printf(" ");
        }
        for(int j=1; j<=star;j++){
            printf("*");
        }
        spes--;
        star+=2;
        printf("\n");
    }
    for (int i=0;i<5;i++) {
        int spes=r-(n/2)-1;
        for (int j=0;j<spes;j++) {
            printf(" ");
        }
        for (int j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}