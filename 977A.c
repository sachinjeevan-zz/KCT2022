#include<stdio.h>
int main()
{
    long long int n,k;
    scanf("%lld %lld",&n,&k);
    while(k--)
    {
        if(n%10!=0)
        {
            n--;
        }
        else
        {
            n/=10;
        }
        
    }
    printf("%lld",n);
}