#include <stdio.h>
int main(){
    int a;
    int cnt=0;
    scanf("%d",&a);
    if (a<=1)
    {
        printf("Not Prime");
    }
    else
    {
        for(int i=2;i<=a;i++)
        {
            cnt++;
            
        }
    }
    if(cnt>=2)
    {
        printf(" Not Prime");

    }
    else if (cnt = 1)
    {
        printf("Prime");
    }
    return 10;
}