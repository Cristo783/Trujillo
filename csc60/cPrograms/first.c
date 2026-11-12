#include <stdio.h>

int main() {
    int a;
    float c = 1.25f;
    char d = 'i';

    printf("Put in a number: ");
    scanf("%d", &a);

    a = a * 5;

    printf("the new number is:%-10d yo float variable: %15.2f mo character: %5c wo\n",
           a, c, d);

    for (int i = 0; i < 5; i++) {
        printf("i:%d ", i);
    }

    int b = 0;
    while (b < 5) {
        printf("i:%d ", b);
        b++;
    }

    int e = 0;
    if (e < 5) {
        do {
            printf("i:%d ", e);
            e++;
        } while (e < 5);
    }

    return 0;
}