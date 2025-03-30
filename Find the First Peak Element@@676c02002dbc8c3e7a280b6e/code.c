// Your code here...
#include<stdio.h>
int main(){
    int arr[10];
    int N,i;
    int large =-999;
    scanf("%d",&N);
    for ( i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    large =arr[0];
    for (i=0;i<N;i++)
    {
        if (arr[i]>large)
        {
            large = arr[i];
            i++;
            break;
        }
    }
    printf("%d",arr[i]);
    return -1;



}