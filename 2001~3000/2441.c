#include <stdio.h>

int main(void) {
    int n;
    int i;
    int j;
    scanf("%d", &n);

    for (i = 0; i < n; ++i) {
        for (j  = 0; j < n; ++j) {
            if (j < i) {
                printf(" ");
            } else {
                printf("*");
            }
        }

        printf("\n");
    }

    return 0;
}
