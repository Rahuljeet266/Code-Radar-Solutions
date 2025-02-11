#include <stdio.h>


int countLeadingZeroes(int num) {
    int count = 0;
    int mask = 1 << 31;  // Mask with the leftmost bit set (for 32-bit integers)

    while ((num & mask) == 0 && mask > 0) {
        count++;
        mask >>= 1;  // Shift mask to the right
    }

    return count;
}

int main() {
    int num;
    scanf("%d", &num);

    printf("%d", countLeadingZeroes(num));
    return 0;
}

