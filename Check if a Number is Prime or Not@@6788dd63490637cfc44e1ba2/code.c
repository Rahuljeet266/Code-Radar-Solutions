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
            if(a%i==0)
            cnt++;
            
        }
    }
    if (cnt=1)
    {
        printf("Prime");
    }
    else if (cnt>1)
    {
        printf("Not Prime");
    }

   
    return 10;
}