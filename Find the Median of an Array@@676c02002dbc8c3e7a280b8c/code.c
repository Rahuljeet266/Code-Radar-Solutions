#include <stdio.h>
int main(){
    int ar[100];
    int n;
    int sm=0;
    int pos=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d"&,ar[i]);
    }
    for(i=0;i<n;i++)
    {
    if(ar[i]%2==0)
    {
        sm=n/2;
        pos=i;
    }
    else if(ar[i]%2!=0)
    {
      sm=(n+1)/2;
      pos=i;
    }
    printf("%d",pos);
    return 10;
    }
}