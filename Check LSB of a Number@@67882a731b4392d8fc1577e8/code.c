#include <stdio.h>
int main(){
    int n,num,rem;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        n=n/10;
    }
    if (n/rem==1)
    {
        printf("Set");
    }
    else
    printf("Not Set");
    return 10;
}