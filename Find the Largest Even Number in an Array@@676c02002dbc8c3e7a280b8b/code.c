// Your code here...
#include<stdio.h>
int main(){
    int arr[10];
    int n,i;
    int large = -9999;
    int flag = 0;
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
            flag = 1;
        }

    }
    if (flag == 1)
    {
        printf("%d",arr[i]);
    }
    else 
    printf("-1");
return 0;
}