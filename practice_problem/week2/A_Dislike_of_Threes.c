#include<stdio.h>
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        int k_th;
        scanf("%d", &k_th);
        int counter=0;
        for(int i=1;i<=k_th;i++)
        {
            counter++;
            if(counter%3==0)
            {
                counter++;
                if(counter%10==3)
                {
                    counter++;
                }
            }
            else if(counter%10==3)
            {
                counter++;
                if(counter%3==0)
                {
                    counter++;
                }
            }
        }
        printf("%d\n",counter);
    }
    return 0;
}