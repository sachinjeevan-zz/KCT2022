#include<stdio.h>
#include<stdlib.h>
int* generatePrimes(int n)
{
    int* arr = (int*)malloc(sizeof(int)*(n+1));
    arr[0]=arr[1]=0;
    for(int i=2;i<=n;i++)
    {
        arr[i] = 1;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(arr[i]==1)
        {
            for(int j=i*i;j<=n;j=j+i)
            {
                arr[j]=0;
            }
        }
    }
    return arr;
}
int main()
{
    int n;
    scanf("%d",&n);
    int* p = generatePrimes(n);
    for(int i=0;i<=n;i++)
    {
        if(p[i]==1)
            printf("%d ",i);
    }
}