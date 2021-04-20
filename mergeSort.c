#include<stdio.h>
void merge(int arr[],int start,int mid,int end) // 
{
    // mid-start+1  // end-mid
    int len1=mid-start+1,len2=end-mid;
    int left[len1],right[len2],k=0;
    for(int i=start;i<=mid;i++)
    {
        left[k++] = arr[i];
    }
    k=0;
    for(int i=mid+1;i<=end;i++)
    {
        right[k++] = arr[i];
    }
    int i=0,j=0;
    while(i<len1 && j<len2)
    {
        if(left[i] < right[j])
        {
            arr[start++] = left[i];
            i++;
        }
        else
        {
            arr[start++] = right[j];
            j++;
        }
    }
    if(i<len1)
    {
        while(i<len1)
        {
            arr[start++] = left[i++];
        }
    }
    if(j<len2)
    {
        while(j<len2)
        {
            arr[start++] = right[j++];
        }
    }

}
void mergeSort(int arr[],int start,int end)
{
    int mid = (start+end)/2;
    if(start<end)
    {
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }
}
int main()
{
    int n,t;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    mergeSort(arr,0,n-1);
    int min=arr[1]-arr[0];
    for(int i=2;i<n;i++)
    {
        if((arr[i]-arr[i-1])<min)
        {
            min = (arr[i]-arr[i-1]);
        }
    }
    printf("%d\n",min);
    }

}