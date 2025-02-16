#include <stdio.h>
int main(){
int a,rem,rem1,b,c,num;
scanf("%d",&a);
a=num;
while(a!=0)
{
    rem=a%8;
    a=a/8;
    b=b*8+rem;
}
printf("%d",b);
return 0;
    
}