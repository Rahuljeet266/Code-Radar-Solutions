#include <stdio.h>
int main(){
    int ar[100];
    int n;
    int sm=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",ar[i]);
    }
    for(i=0;i<n;i++)
    {
    if(ar[i]%2==0)
    {
        sm=n/2;
    }
    else if(ar[i]%2!=0)
    {
      sm=(n+1)/2;
    }
    printf("%d",sm);
    return 10;
    }
}