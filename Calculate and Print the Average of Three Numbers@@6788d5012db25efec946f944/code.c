#include <stdio.h>
int main(){
    int num_1,num_2,num_3,sm=0;
    float avg;
    scanf("%d %d %d",&num_1,&num_2,&num_3);

    sm=num_1+num_2+num_3;
    avg=sm/3.0;
    printf("Average: %.2f",avg);
    return 10;

}