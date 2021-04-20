#include<stdio.h>
#include<math.h>
int isPrime(long long int n)
{
    if(n<=1)
        return 0;
    if(n>3 && (n%2==0 || n%3==0))
        return 0;
    long long int k=1;
    long long int a=6*k-1,b=6*k+1;
    long long int sqr = sqrt(n);
    while(a<=sqr || b<=sqr)
    {
        if(n%a==0 || n%b==0)
            return 0;
        k++;
        a=6*k-1;
        b=6*k+1;
    }
    return 1;
    
}
int main()
{
    long long int t,n;
    scanf("%lld",&t);
    for(long long int i=0;i<t;i++) // 10^5
    {
        scanf("%lld",&n); 
        long long x = sqrt(n);
        if(x*x==n)
        {
            if(isPrime(x)==1)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}