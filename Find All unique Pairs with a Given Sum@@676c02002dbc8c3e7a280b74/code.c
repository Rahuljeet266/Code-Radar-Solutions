// Your code here...
#include<stdio.h>
int main(){
int arr[10];
int n;
int t;
int i,j;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d ",&arr[i]);
}
scanf("%d",&t);
for (i=0;i<n;i++)
{
    for (j=i+1;j<n;j++)
    {
        if (i+j = t && i!=j)
        {
            printf("%d %d",i,j);
        }
    }
    return 0;
}
}