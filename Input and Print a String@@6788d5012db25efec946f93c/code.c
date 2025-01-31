#include <stdio.h>
int main(){
    char ch;
    char str[100];
    ch=getchar();
    while(ch!='*')
    {
        str[i]=ch;
        i++;
        ch=getchar();
    }
    str[i]='\0';
    printf("%s",str);
   
    return 10;
}