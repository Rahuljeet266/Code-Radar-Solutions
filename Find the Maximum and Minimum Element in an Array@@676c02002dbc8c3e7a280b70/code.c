#include <stdio.h>
int main(){
    int ar[10];
    int n;
    int i;
    int large= -9999;
    int small=9999;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        if(ar[i]<small)
        {
            small=ar[i];
        }
    }
    for (i=0;i<n;i++)
    {
        if(ar[i]>large)
        {
            large=ar[i];
        }
    }
    printf("%d %d",small,large);
    return 10;
}