#include <stdio.h>

int main() {
    int num, original, remainder,sum = 0;
    scanf("%d", &num);
    original = num;
    for (; num != 0; num /= 10) {
        remainder = num % 10;
        sum = sum + (remainder * remainder * remainder);
    }
    if (sum == original)
        printf("Yes");
    else
        printf("No");

    return 0;
}
