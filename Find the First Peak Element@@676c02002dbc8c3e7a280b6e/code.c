// Your code here...
#include<stdio.h>
int main(){
    int arr[20];
    int n,i;
    int large = -9999;
    int pos=0;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    large = arr[0];
    pos = 0;
    for (i=0;i<n;i++)
    {
        if (arr[i]>arr[i+1])
        {
            printf("%d",arr[i]);
            break;
            i++;
        }
        else 
        printf("-1");
        break;

    }
    return 10;
    
}