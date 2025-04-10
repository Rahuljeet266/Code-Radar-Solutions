// Your code here...
#include<stdio.h>
int main(){
    int arr[10];
    int n,i;
    int flag = 0;
    int small = 9999;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    small = arr[0];
    for(i=0;i<n;i++)
    {
       if(arr[i]<small)
       {
        small = arr[i];
        flag = 1;
       }
       else if (arr[i] == arr[i+1] || arr[i]>small)
       {
        flag = 0;
       }
       if (flag == 1)
       {
        printf("%d",small);
       }
       else if (flag == 0)
       {
        printf("-1");
       }
       return 0;
        
    }
}