// https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-batch-08/challenges/jadu-matrix
#include<stdio.h>
#include<stdbool.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    bool is_diagonal=true;
    if(r==c) // square matrix
    {
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(i==j || i+j==r-1)
                {
                    if(a[i][j]!=1)
                    {
                        // // we are now at outside diagonal
                        is_diagonal=false;
                        
                    }
                    
                }
                else
                {
                    if(a[i][j]!=0)
                    {
                        // // we are now at outside diagonal
                        is_diagonal=false;
                        
                    }
                }
            }
        }
        if(is_diagonal)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    else // not square matrix
    {
        printf("NO\n");
    }

    return 0;
}