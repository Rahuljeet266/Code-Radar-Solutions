#include<stdio.h>
int main(){
    int ar[10];
    int n;
    int i;
    int flag=0;
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
            if(ar[i]>sec_large && ar[i]<ar[pos1])
            {
                sec_large=ar[i];
            }
        }
        // else if (ar[i]==ar[i+1])
        // printf("-1");

    }
    for(i=0;i<n;i++)
    {
        if (ar[i]==sec_large || ar[i]== large)
        {
            flag =1;
        }
        
    }
    if (flag==1)
    {
        printf("-1");
    }
    
    else 
    {printf("%d",sec_large);
    printf("%d",large);}
    return -1;
}