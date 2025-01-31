#include <stdio.h>
int main(){
    char c='A';
    int n,i,j;
    scanf("%d",n);
    for(i='A';i<=n;i++)
    {
        for(j='A';j>=i;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 10;
}