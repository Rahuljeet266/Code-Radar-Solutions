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
        for(int i=1;i<=a;i++)
        {
            if(a%i==0)
            cnt++;
            
        }
    }
    if (cnt<2)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }

   
    return 10;
}