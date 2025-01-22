#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if ((ch=='a')||(ch=='A')||(ch=='e')||(ch=='E')||(ch=='i')||(ch=='I')||(ch=='o')||(ch=='O')||(ch=='U')||(ch=='u'));
    {
        printf("Vowel");
    }
    else if ((ch>='1')&&(ch<='9'))
    {
        printf("Digit");
    }
    else
    printf("Consonant");
    return 10;
}