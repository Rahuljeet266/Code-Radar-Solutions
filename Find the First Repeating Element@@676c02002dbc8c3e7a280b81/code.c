// Your code here...
#include<stdio.h>
int main(){
    int arr[10];
    int n;
    int rep = 0;
    int i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i] == arr[j] && i!=j)
            {
                printf("%d",arr[i]);
                rep = 1;
                break;
            }

        }
        if(rep)
        {
            break;
        }
    }
    if(!rep)
    {
        printf("-1");
    }
    return 0;




    return 0;

}