#include <stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a;
    a=1&~(n>>m);
    printf("%d",a);
    return 0;
}