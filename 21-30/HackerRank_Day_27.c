#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int marks[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }
    char gender;
    scanf(" %c", &gender);
    int sum = 0;
    int start = (gender == 'b') ? 1 : 0;
    for (int i = start; i < n; i += 2) {
        sum += marks[i];
    }
    printf("%d\n", sum);
    return 0;
}
