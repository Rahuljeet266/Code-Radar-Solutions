#include <stdio.h>
int main(){
    char c='A';
    int i,j,n;
    scanf("%d",&n);
    for(i=65;i>=c;i++)
    {
        for(j=65;j<=i;j++)
       { 
        printf("%c ",j);
       }
       printf("\n");    }
    return 0;

}