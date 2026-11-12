#include <stdio.h>

int main() {
    // Q1: Declaring variables
    int a;
    int *b;
    int **c;
    float d;

    // Q2: Initializing the variables
    a = 5;
    b = &a;
    c = &b;
    d = 2.5f;

    // Q3: Addresses and contents of each variable
    printf("Question 3:\n");
    printf("a: address %p contents %d\n", &a, a);
    printf("b: address %p contents %p\n", &b, b);
    printf("c: address %p contents %p\n", &c, c);
    printf("d: address %p contents %f\n", &d, d);

    // Q4: Modify the contents of a - c
    printf("\nQuestion 4:\n");
    **c = 10;
    printf("a = %d\n", a);

    // Q5: Modify the contents of b - c

    printf("\nQuestion 5:\n");
    int z = 20;
    *c = &z;
    printf("b points to %d\n", *b);

    // reset b
    b = &a;

    // Q6: Use a pointer variable to link to d
    printf("\nQuestion 6:\n");
    float *p;
    p = &d;
    printf("d = %f\n", *p);

    // reset variables
    a = 5;
    b = &a;
    c = &b;
    
    // Q7
    printf("\nQuestions 7:\n");

    // a) display **&b
    printf("a) %d\n", **&b);

    // b) display &*&*b
    printf("b) %p\n", &*&*b);

    // c) display &&b
    // Invalid expression
    printf("c) Invalid\n");

    // d) d = &c
    // Invalid: d is a float
    printf("d) Invalid\n");

    // e) c = &a
    // Invalid: c is a pointer to a pointer
    printf("e) Invalid\n");

    // Q8: Pointer operations
    printf("\nQuestions 8:\n");

    // reset variables 
    a = 5;
    b = &a;
    c = &b;

    // 1a) display **c++
    printf("1a) %d\n", **c++);

    // 1b) display c
    printf("1b) %p\n", c);

    // reset variables
    a = 5;
    b = &a;
    c = &b;

    // 2a) display **++c
    // Undefined behavior: dereferences past b 
    printf("2a) Undefined behavior\n");

    // 2b) display c
    ++c;
    printf("2b) %p\n", c);

    // reset variables
    a = 5;
    b = &a;
    c = &b;

    // 3a) display ++**c
    printf("3a) %d\n", ++**c);

    // 3b) display c
    printf("3b) %p\n", c);

    // reset variables
    a = 5;
    b = &a;
    c = &b;

    // 4a) display (**c)++
    printf("4a) %d\n", (**c)++);

    // 4b) display c
    printf("4b) %p\n", c);

    return 0;
}