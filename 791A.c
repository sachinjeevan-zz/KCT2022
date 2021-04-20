#include<stdio.h>
int main()
{
    long long int a,b,count=0;
    scanf("%lld %lld",&a,&b);
    while(a<=b)
    {
        a*=3;
        b*=2;
        count++;
    }
    printf("%lld",count);
}