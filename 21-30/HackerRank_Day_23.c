#include <stdio.h>

int main() {
    char s[1001];
    // Reads the whole line including spaces
    fgets(s, sizeof(s), stdin);
    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] == ' ' || s[i] == '\n') {
            printf("\n");
        } else {
            printf("%c", s[i]);
        }
    }
    return 0;
}
