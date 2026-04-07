#include <stdio.h>

int main() {
    int n, reverse = 0, remainder, original;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }

    if (original == reverse)
        printf("Palindrome number");
    else
        printf("Not a palindrome");

    return 0;
}
