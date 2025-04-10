#include<stdio.h>
int main(){
    int arr[10];
    int n,i;
    int inc = 0;
    int dec = 0;
    int eq = 0;
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
        else if(arr[i] == arr[i+1])
        {
            eq = 1;
        }
    }
    if(inc == 1 || dec == 1 || eq = 1)
    {
        printf("YES");
    }
    else
    printf("NO");
    return 0;
}