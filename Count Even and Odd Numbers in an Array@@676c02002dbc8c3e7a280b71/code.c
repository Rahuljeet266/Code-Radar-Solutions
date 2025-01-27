#include <stdio.h>
int main(){
    int i;
    int a;
    scanf("%d",&a);
    int ar[100];
    int cnt_ev=0;
    int cnt_odd=0;
    for(i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
    }

    for(i=0;i<a;i++)
    {
     if(ar[i]%2==0)
     {
        cnt_ev++;
     }
     else if(ar[i]%2!=0)
     cnt_odd++;
    }
    
    
    printf("%d %d",cnt_ev,cnt_odd);
    return 10;
}