#include<stdio.h>
int main()
{
    long long int x;
    scanf("%lld",&x);
    long long int c = x/5;
    x%5!=0?printf("%lld",c+1):printf("%lld",c);
}