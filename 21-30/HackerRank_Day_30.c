#include <stdio.h>
#include <stdlib.h>

int main() {
    int total_number_of_shelves, total_number_of_queries;
    scanf("%d %d", &total_number_of_shelves, &total_number_of_queries);

    int *total_number_of_books = calloc(total_number_of_shelves, sizeof(int));
    int **total_number_of_pages = malloc(total_number_of_shelves * sizeof(int*));

    for (int i = 0; i < total_number_of_shelves; i++) {
        total_number_of_pages[i] = malloc(1100 * sizeof(int));
    }

    for (int i = 0; i < total_number_of_queries; i++) {
        int type;
        scanf("%d", &type);

        if (type == 1) {
            int x, y;
            scanf("%d %d", &x, &y);
            int book_index = total_number_of_books[x];
            total_number_of_pages[x][book_index] = y;
            total_number_of_books[x]++;
        } else if (type == 2) {
            int x, y;
            scanf("%d %d", &x, &y);
            printf("%d\n", total_number_of_pages[x][y]);
        } else if (type == 3) {
            int x;
            scanf("%d", &x);
            printf("%d\n", total_number_of_books[x]);
        }
    }

    for (int i = 0; i < total_number_of_shelves; i++) {
        free(total_number_of_pages[i]);
    }
    free(total_number_of_pages);
    free(total_number_of_books);

    return 0;
}
