#include <stdio.h>

int update(int *a, int *b) {
    int sum = *a + *b;
    int diff = *a - *b;

    if (diff < 0)
        diff = -diff;

    *a = sum;
    *b = diff;

    return 0;  // Return 0 to satisfy 'int' return type
}

int main() {
    int a, b;
    
    // Input values
    scanf("%d %d", &a, &b);

    // Call update function
    update(&a, &b);

    // Print updated values
    printf("%d\n%d\n", a, b);

    return 0;
}
