#include<stdio.h>
int main()
{
    long long int k,w,n;
    scanf("%lld %lld %lld",&k,&n,&w);
    long long int a=k,m=w,d=k;
    long long int an = a + (m-1)*d;
    long long int sn = (m/2.0)*(a+an);
    if(sn>n)
        printf("%lld",sn-n);
    else
        printf("0");
}