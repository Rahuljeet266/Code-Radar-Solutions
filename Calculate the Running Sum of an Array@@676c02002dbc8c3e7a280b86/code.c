// Your code here...
#include<stdio.h>
int main(){
    int arr[10];
    int n,i,sum = 0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
        printf("%d ",sum);
    }
    return 0;

}