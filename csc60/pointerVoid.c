// Cristobal Trujillo
// Program: groupVoid.c
// Description: Uses different types of pointers and 
//              modifies variables through void pointers
// CSC60 05

#include <stdio.h>

int main() {

    // Q1: Declare the variables
    int a;
    int *b;
    float c;
    int **d;
    void *e;
    int *g;

    // Q2: corrected pointer assignments
    a = 10;
    c = 2.5f;

    b = &a;
    g = &a;
    d = &b;
    e = &c;
    e = &a;
    e = b;
    g = e;

    // Q3: Modify a through e
    // e points to d, d points to b, and b points to a
    b = &a;
    d = &b;
    e = &d;

    // changes the value of a through e
    ***((int ***)e) = 1;

    printf("Value of a: %d\n", a);

    // Q4: Modify b through e
    // changes b to a null pointer
    **((int ***)e) = NULL;

    if (b == NULL) {
        printf("b is now a null pointer\n");
    }

    // Q5: Modify c through e
    // e points to c
    e = &c;

    // changes the value of c through e
    *((float *)e) = 3.5f;

    printf("Value of c: %.1f\n", c);


    return 0;
}