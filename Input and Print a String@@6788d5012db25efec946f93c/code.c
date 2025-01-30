#include <stdio.h>
int main(){
    char str[100];
    gets(str);
    puts("You entered: %s",str);
    return 10;
}