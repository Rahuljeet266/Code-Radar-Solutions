#include <stdio.h>
int main(){
    char c='A';
    int i,j;
    for(i=65;i<=70;i++)
    {
        for(j=65;j<=i;j++)
       { 
        printf("%c ",j);
       }
       printf("\n");    }
    return 0;

}