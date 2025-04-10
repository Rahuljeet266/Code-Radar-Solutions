#include<stdio.h>
int main(){
    int arr[10];
    int n,i;
    int inc = 1;
    int dec = 1;
    int eq = 1;
    int on = 1;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            dec = 1;
        }
        else if(arr[i]<arr[i+1])
        {
            inc = 1;
        }

    }
    if(inc || dec)
    {
        printf("YES");
    }
    else
    printf("NO");
    return 0;
}