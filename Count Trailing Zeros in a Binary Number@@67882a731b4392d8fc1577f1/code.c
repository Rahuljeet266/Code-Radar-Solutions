// Your code here...
#include <stdio.h>

int countTrailingZeroes(int num) {
    int count = 0;

    while ((num & 1) == 0 && num != 0) {
        count++;
        num >>= 1;  // Right shift to check the next bit
    }

    return count;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Trailing zeroes in binary: %d\n", countTrailingZeroes(num));
    return 0;
}
