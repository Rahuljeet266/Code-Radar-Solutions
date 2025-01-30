#include <stdio.h>
int main(){
    int a;
    int b=1<<31;
    itn cnt=0;
    int num;
    scanf("%d",&num);
    if(num==0)
    {
        cnt =32;
    }
    else 
    {
        while(a&b==0)
        {
            cnt++;
            b>>=1;
        }
    }
    printf("%d",cnt);
    return 0;

}