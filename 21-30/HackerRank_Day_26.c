#include <stdio.h>
#include <string.h>

int n;
char s[10][11];
int used[10];
char result[10][11];

void printPermutation() {
    for (int i = 0; i < n; i++) {
        printf("%s", result[i]);
        if (i != n - 1)
            printf(" ");
    }
    printf("\n");
}

void backtrack(int depth) {
    if (depth == n) {
        printPermutation();
        return;
    }

    for (int i = 0; i < n; i++) {
        if (!used[i]) {
            used[i] = 1;
            strcpy(result[depth], s[i]);
            backtrack(depth + 1);
            used[i] = 0;
        }
    }
}

int main() {
    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", s[i]);
    }

    printf("\nAll permutations:\n");
    backtrack(0);

    return 0;
}
