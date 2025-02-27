#include <stdio.h>
int main(){
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        {for(k=n;k>=i;k--)
        printf(" ");}
        {for(j=1;j<=2*i-1;j++)
        printf("*");}
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(k=1;k<=n-1;k++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("\n");
        }
        printf("\n");
    }
    for(i=1;i>=n-1;i++)
    {
        for(k=n-1;k>=1;k--)
        {
            printf(" ");
        }
        for(j=1;j<=2*(i-1)-1;j++)
        {
            printf("\n");
        }
        printf("\n");
    }
    return 10;
    
}