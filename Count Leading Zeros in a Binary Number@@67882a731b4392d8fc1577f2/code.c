#include <stdio.h>


int countLeadingZeroes(int num) {
    int count = 0;
    int mask = 1 << 31;  

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

