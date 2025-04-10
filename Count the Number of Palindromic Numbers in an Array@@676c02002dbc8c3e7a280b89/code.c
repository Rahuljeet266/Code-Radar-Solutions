// Your code here...
#include<stdio.h>
#include<math.h>
int main(){
    int arr[10];
    int n,i;
    float temp;
    int cnt = 0;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if (arr[i]!=0)
        {
            temp = temp + arr[i] * pow(10,i);
        }
        if (temp = arr[i])
        {
            cnt++;
        }
        else
        printf("0");

    }
    return 0;
}