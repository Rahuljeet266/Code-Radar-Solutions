// Your code here...
#include<stdio.h>
int main(){
    int arr[10];
    int n;
    int i;
    int large = -9999;
    int pos = 0;
    int sec_large = -9900;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    large = arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]> large)
        {
            large = arr[i];
            pos = i;
        }
    }
    sec_large = arr[0];
    for(i=0;i<n;i++)
    {
        if(i!=pos)
        {
            if(arr[i]>sec_large)
            {
                sec_large = arr[i];
            }
        }
    }
    printf("%d",large*sec_large);
    return 0;
    











}