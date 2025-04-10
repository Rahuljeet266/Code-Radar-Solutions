// Your code here...
#include<stdio.h>
int main(){
    int arr[10];
    int n,i,K;
    int cnt = 0;
    scanf("%d %d",&n,&K);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++)
    {
        if(arr[i]> K )
        {
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;


}