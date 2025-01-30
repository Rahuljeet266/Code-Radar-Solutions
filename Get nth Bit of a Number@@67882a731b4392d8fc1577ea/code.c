#include <stdio.h>
int main(){
    int x,y,z
    scanf("%d %d",&y,&x);
    z=(y>>x)&1;
    printf("%d",z);
    return 0;
}