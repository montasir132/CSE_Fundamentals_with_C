// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/I
#include<stdio.h>
int rec(char n[], int i )
{
    if(n[i]=='\0')
    {
        return 0;
    }
    int count = rec(n,i+1);
    if(n[i]=='a'|| n[i]=='e'|| n[i]=='i'|| n[i]=='o'|| n[i]=='u'|| n[i]=='A'|| n[i]=='E'|| n[i]=='I'|| n[i]=='O'|| n[i]=='U')
    {
        return count+1;
    }
    else{return count;}
}
int main()
{
    char n[201];
    fgets(n,201,stdin);
    int ans=rec(n,0);
    printf("%d",ans);
    return 0;
}