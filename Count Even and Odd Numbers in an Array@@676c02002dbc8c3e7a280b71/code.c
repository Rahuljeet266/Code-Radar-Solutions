#include <stdio.h>
int main(){
    int i;
    int ar[1000];
    int n;
    int cnt_ev=0;
    int cnt_odd=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
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