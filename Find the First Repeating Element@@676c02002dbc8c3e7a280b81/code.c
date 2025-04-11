// Your code here...
#include<stdio.h>
int main(){
    int arr[10];
    int n;
    in rep = 0;
    int i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i] == arr[j] && i!=j)
            {
                rep = 1;
                break;
            }
        }
    }
    if(rep == 1)
    {
        printf("%d",arr[i]);
    }
    else 
    printf("-1");
    return 0;

}