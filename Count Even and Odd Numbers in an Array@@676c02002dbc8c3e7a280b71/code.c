#include <stdio.h>
int main(){
    int i;
    int ar[100];
    int n;
    int cnt_ev=0;
    int cnt_odd=0;
    int num;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
     if(ar[i]%2==0)
     {
        cnt_ev++;
     }
     else
     cnt_odd++;
    }
    printf("%d %d",cnt_ev,cnt_odd);
    return 10;
}