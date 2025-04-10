// Your code here...
#include<stdio.h>
int main(){
    int arr[10];
    int n,i;
    int large = -9999;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    large = arr[0];
    for(i=0;i<n;i++)
    {
        if (arr[i]>large && arr[i]%2==0)
        {
            printf("%d",arr[i]);
        }
    }
    else
    printf("-1");

return 0;
}