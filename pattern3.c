#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 5; i++) {

        // print spaces
        for(j = 1; j <= 5 - i; j++) {
            printf(" ");
        }

        // print stars
        for(j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
