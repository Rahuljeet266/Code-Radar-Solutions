#include <stdio.h>
int main(){
    int ar[10];
    int n;
    int i;
    int large=-999;
    int sec_large=-900;
    int pos1=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for (i=0;i<n;i++)
    {
        if(ar[i]>large)
        {
            large=ar[i];
            pos1=i;        
        }
    }
    for (i=0;i<n;i++)
    {
        if(i!=pos1)
        {
            if(ar[i]>sec_large)
            {
                sec_large=ar[i];
            }
        }
        else if (ar[i]==ar[i+1])
        printf("-1");
    }
    printf("%d",sec_large);
    return -1;
}