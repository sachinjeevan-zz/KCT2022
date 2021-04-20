#include<stdio.h>
int* func()
{
    int arr[5]={1,4,7,2,9};
    return arr;
}
int main()
{
    int *p=func();
    printf("%d",p[2]);
}