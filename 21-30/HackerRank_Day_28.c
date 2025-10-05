#include <stdio.h>

int main() {
    int total_number_of_shelves, total_number_of_queries;
    scanf("%d %d", &total_number_of_shelves, &total_number_of_queries);

    int shelves[total_number_of_shelves];
    for (int i = 0; i < total_number_of_shelves; i++) {
        shelves[i] = 0;
    }

    for (int i = 0; i < total_number_of_queries; i++) {
        int type;
        scanf("%d", &type);

        if (type == 1) {
            int x, y;
            scanf("%d %d", &x, &y);
            shelves[x] += y;
        } else if (type == 2) {
            int x, y;
            scanf("%d %d", &x, &y);
        } else if (type == 3) {
            int x;
            scanf("%d", &x);
        }
    }

    for (int i = 0; i < total_number_of_shelves; i++) {
        printf("Shelf %d has %d books\n", i, shelves[i]);
    }

    return 0;
}
