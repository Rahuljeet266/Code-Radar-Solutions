#include <stdio.h>
int main(){
    int ch;
    scanf("%d",&ch);
    if ((ch>=65)&&(ch<=90))
    {
        printf("Uppercase");
    }
    else if((ch>=97)&&(ch<=120))
    {
        printf("Lowercase");
    }
    return 10;
}