#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    int count=0,prev=-1;
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);
        if(prev==n)
            continue;
        else
            count++;
        prev =n;  
    }
    printf("%d",count);
}