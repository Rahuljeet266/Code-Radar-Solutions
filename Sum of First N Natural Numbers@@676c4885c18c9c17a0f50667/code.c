#include <stdio.h>
int main(){
    int a;
    int sm=0;
    scanf("%d",&a);
    for (int i=0;i<a;i++)
    {
        sm+=i;
    }
    printf("%d",sm);
    return 10;
}