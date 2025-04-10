// Your code here...
#include<stdio.h>
int main(){
    int arr[10];
    int n,i;
    int large = -9999;
    in small = 9999;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i,n;i++)
    {
        if(arr[i]> arr[i+1] || arr[i]<arr[i+1])
        {
            printf("YES");
        }
        else
        printf("NO");
    }
    return 0;
}