#include <stdio.h>

int main() {

    // array = a fixed-sized collction of elements of the same data type
    //         (Similar to a variable, but it holds more than 1 value)

    int numbers[] = {10, 20, 30, 40, 50, 60, 70};
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    char name[] = "Cris Trujillo";

    int size = sizeof(numbers) / sizeof(numbers[0]);

    //printf("%lu\n", sizeof(numbers));
    //printf("%lu\n", sizeof(numbers[0]));


        for (int i = 0; i < size; i++) {
            printf("%d ", numbers[i]);
        }

    /*
        numbers[0] = 100;
        numbers[1] = 90;
        numbers[2] = 80;
        numbers[3] = 70;
        numbers[4] = 60;

        printf("%d\n", numbers[0]);
        printf("%d\n", numbers[1]);
        printf("%d\n", numbers[2]);
        printf("%d\n", numbers[3]);
        printf("%d\n", numbers[4]);
    */



    return 0;
}