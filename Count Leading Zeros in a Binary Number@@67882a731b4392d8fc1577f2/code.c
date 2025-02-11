#include <stdio.h>
int countLeadingZeroes(unsigned int num) {
    if (num == 0) return 32; // Special case: all bits are zero

    int count = 0;
    for (int i = 31; i >= 0; i--) {
        if (num & (1U << i)) {
            break; // Stop counting once we hit the first '1'
        }
        count++;
    }

    return count;
}

int main() {
    unsigned int num;
    scanf("%u", &num);  // Use %u for correct unsigned input handling
    printf("%d", countLeadingZeroes(num));
    return 0;
}


