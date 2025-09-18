#include <stdio.h>

int main() {
    int l1, b1, l2, b2, l3, b3;
    printf("Enter length and breadth of rectangle 1: ");
    scanf("%d %d", &l1, &b1);
    printf("Enter length and breadth of rectangle 2: ");
    scanf("%d %d", &l2, &b2);
    printf("Enter length and breadth of rectangle 3: ");
    scanf("%d %d", &l3, &b3);

    int p1 = 2 * (l1 + b1);
    int p2 = 2 * (l2 + b2);
    int p3 = 2 * (l3 + b3);

    int max = (p1 > p2 && p1 > p3) ? p1 : (p2 > p3 ? p2 : p3);
    printf("Highest perimeter is: %d\n", max);

    return 0;
}