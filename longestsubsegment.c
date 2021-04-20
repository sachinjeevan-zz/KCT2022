#include<stdio.h>
int main()
{
    int n,max=1,length=1,x,prev;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        if(i!=0)
        {
            if(x>=prev)
            {
                length++;
                if(length>max)
                    max = length;
            }
            else
            {
                length = 1;
            }
        }
        prev = x;
    }
    printf("%d",max);
}