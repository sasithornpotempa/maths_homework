#include <stdio.h>

int main() {
    int i;

    printf("Hello, World!\n");
    for (i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            printf("This is an even number.\n");
        } else {
            printf("This is an odd number.\n");
        }
    }

    return 0;
}
