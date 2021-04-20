#include<stdio.h>
#include<math.h>
int isPrime(int n) // Function Signature
{
    if(n <= 1 || (n>=4 && (n%2==0 || n%3==0)) ) 
        return 0;
    int k = 1;
    int a=6*k-1,b=6*k+1,sqr = sqrt(n);
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
    int n = 901;
    //scanf("%d",&n);
    isPrime(n)==1?printf("Prime"):printf("Not a Prime");
}
