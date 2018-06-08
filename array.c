#include <stdio.h>

#define RANDOM_VAL 5

size_t len(int *a) {
    return sizeof(a)/sizeof(a);
}

void foobar(int *z) {
    z[5] = RANDOM_VAL;
    size_t length = sizeof(z)/sizeof(z[0]);

    // access from index
    for (int i = 0; i < length + 1; i++)
        printf("Element %d is %d\n", i, z[i]);

    puts("Another way!");
    // access from pointer
    for (int i = 0; i < length + 1; i++)
        printf("Element %d is %d\n", i, *(z + i));

}

int main() {
    int x[4] = {1,2,3,4};

    // x is already an address
    foobar(x);
    printf("%d\n", x[1]);
    return 0;
}