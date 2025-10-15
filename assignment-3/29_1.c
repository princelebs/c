#include <stdio.h>

int main() {
    int i, j, space;
    char ch = 'A';     // starting letter
    int n = 6;         // total rows

    for(i = 1; i <= n; i++) {

        // print spaces to center the letters
        for(space = 1; space <= n - i; space++) {
            printf(" ");
        }

        // print letters with spaces between them
        for(j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;
        }

        printf("\n");
    }

    return 0;
}