#include<stdio.h>
int main(){
int arr[20];
int n;
int i,j;
scanf("%d",&n);
for (i=0;i<n;i++)
{
    scanf("%d ",&arr[i]);
}
for(i=0;i<n-1;i++)
{   
    if (arr[i]<arr[i+1])
    {
        printf("Sorted");
    }
    i++;
}
if (arr[i]>arr[i+1])
{
    printf("Not Sorted");
}return 10;}