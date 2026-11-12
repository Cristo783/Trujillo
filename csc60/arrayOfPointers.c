// Cristobal Trujillo
// Program: arrayOfPointers.c
// Description: Stores four names using array and pointers
//              and swaps pointers and original strings
// CSC60 05

#include <stdio.h>

void swapNames(char *pointers[]);

int main() {

    // makes a 2D array for two names
    char names[2][10];
    // pointer to the 2D array
    char(*ptr)[10] = names;
    // makes two 1D array for the other names
    char name3[10];
    char name4[10];
    // array of 4 pointers
    char *pointers[4];
    // temporary pointer used for swapping
    char *temp;
    int i;

    // asks user to enter first two names
    for (i = 0; i < 2; i++) {
        printf("Enter name %d: ", i + 1);
        scanf("%9s", ptr[i]);

    }

    // asks user to enter name3 and name4
    printf("Enter name 3: ");
    scanf("%9s", name3);

    printf("Enter name 4: ");
    scanf("%9s", name4);

    // makes pointers point to the four names
    pointers[0] = names[0];
    pointers[1] = names[1];
    pointers[2] = name3;
    pointers[3] = name4;

    // swaps the 2nd and 4th pointers
    // this changes the pointers but not the original names
    temp = pointers[1];
    pointers[1] = pointers[3];
    pointers[3] = temp;

    // calls swapNames function to swap the first and third original names
    swapNames(pointers);

    // Original Arrays
    printf("\nOriginal Arrays:\n");

    printf("Name 1: %s\n", names[0]);
    printf("Name 2: %s\n", names[1]);
    printf("Name 3: %s\n", name3);
    printf("Name 4: %s\n", name4);

    // displays array of pointers
    printf("\nArray of Pointers:\n");

    for (i = 0; i < 4; i++) {
        printf("Pointer %d: %s\n", i + 1, pointers[i]);
    }

    return 0;
}

void swapNames(char *pointers[]) {

    // temporary array to store the first name
    char temp[10];
    int i;

    // saves first name in temp
    for (i = 0; i < 10; i++) {
        temp[i] = pointers[0][i];
    }

    // copies the third name into the first name
    for (i = 0; i < 10; i++) {
        pointers[0][i] = pointers[2][i];
    }

    // copies temp into the third name
    for (i = 0; i < 10; i++) {
        pointers[2][i] = temp[i];
    }
}