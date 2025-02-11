#include <stdio.h>


int countLeadingZeroes(int num) {
    if (num==0)
    return 32;
    int count = 0;
    unsigned int mask = 1 << 31;  

    while (num & mask == 0)  {
        count++;
        mask >>= 1;  
    }

    return count;
}

int main() {
    int num;
    scanf("%d", &num);

    printf("%d", countLeadingZeroes(num));
    return 0;
}

