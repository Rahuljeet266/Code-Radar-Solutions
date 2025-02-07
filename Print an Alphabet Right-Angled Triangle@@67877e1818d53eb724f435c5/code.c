#include <stdio.h>
int main(){
    char c='A';
    int i,j,n;
    scanf("%d",&n);
    for(i=65;i<=n;i++)
    {
        for(j=65;j<=i;j++)
       { 
        printf("%c ",c);
        c++;
       }
       printf("\n");    }
    return 0;

}