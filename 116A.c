#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int a,b;
    long long int passenger = 0,min=-1;
    for(long long int i=0;i<n;i++)
    {
        scanf("%lld %lld",&a,&b);
        passenger-=a;
        passenger+=b;
        min = passenger>min?passenger:min;
    }
    printf("%lld",min);
}