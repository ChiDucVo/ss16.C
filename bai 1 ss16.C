#include <stdio.h>

int main() {
    int num = 42;
    int *ptr = &num;

    printf("Gia tri cua num (cach 1): %d\n", num);
    printf("Dia chi cua num (cach 1): %p\n", (void *)&num);

    printf("Gia tri cua num (cach 2): %d\n", *ptr);
    printf("Dia chi cua num (cach 2): %p\n", (void *)ptr);

    return 0;
}
