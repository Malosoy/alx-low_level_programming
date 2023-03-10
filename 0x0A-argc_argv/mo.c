#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int sum = 0;
    int i;

    for (i = 1; i < argc; i++) {
        char *endptr;
        long num = strtol(argv[i], &endptr, 10);

        if (*endptr != '\0') {
            printf("Error\n");
            return 1;
        }
        if (num < 0) {
            printf("Error\n");
            return 1;
        }

        sum += (int) num;
    }

    printf("%d\n", sum);
    return 0;
}
