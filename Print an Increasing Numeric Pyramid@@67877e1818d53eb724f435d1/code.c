#include <stdio.h>
int main(){
    int i,j,n,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=n;k>=i;k--)
        {
           printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
            if(j<i){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 10;
    
    
    
    }
  