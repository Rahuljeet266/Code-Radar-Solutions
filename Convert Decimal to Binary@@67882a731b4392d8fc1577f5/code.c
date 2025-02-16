#include <stdio.h>
int main(){
int a,b,rem=0;
int i=1;
scanf("%d",&a);
while(a!=0)
{
    rem=a%2;
    a=a/2;
    b=b+rem*i;
    i*=10;

}
printf("%d",b);
return 0;
}