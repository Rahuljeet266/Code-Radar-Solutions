#include <stdio.h>
int main(){
    int ar[100];
    int n;
    int med;
    int pos=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
    if(ar[i]%2==0)
    {
        med=n/2;
        pos=i;
    }
    else if(ar[i]%2!=0)
    {
      med=(n+1)/2;
      pos=i;
    }
    else
    printf("Invalid")
    printf("%d",pos);
    return 10;
    }
}