#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int count1;
    if(a==1)
        count1=1;
    else
        count1 = a;
    int rem=0,q=a/b;
    while(a>=b)   
    {                

        q = a/b;
        count1+=q;
        rem = a%b;
        a = q+rem;
    }
    printf("%d",count1);
}