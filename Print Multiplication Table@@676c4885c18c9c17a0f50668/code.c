#include <stdio.h>
int main(){
     int a;
     int mult=1;
     scanf("%d",&a);
     for (int i=0;i<=10;i++)
     {
         mult*=i;
     }
     printf("%d x %d = %d",a,i,mult);
     return 10;
}