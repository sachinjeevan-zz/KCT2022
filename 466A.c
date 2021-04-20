#include<stdio.h>
int main()
{
    int n,m,a,b;
    scanf("%d %d %d %d",&n,&m,&a,&b);
    int k = n/m; // to know the number of special ticket
    int t = n%m;
    // formula 1
    int ans1 = n*a;
    int ans2 = (k*b)+(t*a);
    int ans3 = -1;
    if(t>0)
        ans3 = (k*b)+b;
    if(ans3!=-1)
        printf("%d", (ans1<ans2 && ans1<ans3)? ans1: (ans2<ans3)?ans2:ans3);
    else
        printf("%d", (ans1<ans2?ans1:ans2));

}