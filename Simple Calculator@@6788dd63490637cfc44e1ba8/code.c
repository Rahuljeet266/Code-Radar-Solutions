#include <stdio.h>
int main(){
    int a,b;
    char c;
    int sm,diff,mult,div;
    sm=a+b;
    diff=a-b;
    mult=a*b;
    div=a/b;
    scanf("%d %d %c",&a,&b,&c);
    if (c=='+')
    {
        printf("%d",sm);
    }
    else if(c=='-')
    {
        printf("%d",diff);
    }
    else if(c=='*')
    {
        printf("%",mult);
    }
    else if(c=='/')
    {
        printf("%d",div)
    }
    else
    printf("Error");
    return 10;

    return 10;
}