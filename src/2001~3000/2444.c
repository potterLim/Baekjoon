#include <stdio.h>

int main(void) 
{
    int n;
    int i;
    int j;
    int k;

    scanf("%d", &n);

    for (i = 0; i < n; ++i) {
        for (j = 0; j < n - i - 1; ++j) {
            printf(" ");
        }
        for (k = 0; k < (2 * i + 1); ++k) {
            printf("*");
        }
        printf("\n");
    }

    for (i = n - 2; i >= 0; --i) {
        for (j = 0; j < n - i - 1; ++j) {
            printf(" ");
        }
        for (k = 0; k < (2 * i + 1); ++k) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
