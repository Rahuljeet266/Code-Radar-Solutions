#include <stdio.h>
int main(){
    char c='A';
    int n,i,j;
    scanf("%d",&n);
    for(i=65;i<=n;i++)
    {
        for(j=i;j>=i;j--){
            printf("%c",j);
        }
        printf("\n");
    }
    return 10;
}