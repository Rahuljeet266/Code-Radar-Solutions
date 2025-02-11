#include <stdio.h>
int main(){
   int a;
   int i=4;
   scanf("%d",&a);
   printf("%d",(a>>i) & 1);
   return 0;
   
}