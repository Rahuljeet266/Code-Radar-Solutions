#include <stdio.h>
int main(){
    int i,j,n;
    int ar[100];
    int temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(ar[j]>ar[j+1])
            {
                  temp=ar[j];
                  ar[j]=ar[j+1];
                  ar[j+1]=temp;
            }
        }
    }
    printf("%d",ar[i]);
}