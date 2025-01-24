#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch=='R')
    {
        printf("stop");
    }
    else if(ch=='G')
    {
        printf("Go");
    }
    else if(ch=='y')
    {
        printf("Slow Down");
    }
    else
    printf("Invalid input");
    return 10;
}