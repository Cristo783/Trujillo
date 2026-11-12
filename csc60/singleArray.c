#include <stdio.h>

int *modifyArray(int *arr);

int main() {

    // Q1: Single dimensional array
    int a[5] = {1, 2, 3, 4, 5};


    // Q2: Access the second element using pointer syntax
    printf("Question 2:\n");
    printf("Second element: %d\n", *(a + 1));


    // Q3: Access the address of the second element
    printf("\nQuestion 3:\n");
    printf("Address: %p\n", (void *)(a + 1));


    // Q4: Assign the array to a pointer variable
    printf("\nQuestion 4:\n");
    int *p = a;
    printf("First element: %d\n", *p);


    // Q5: Assign the address of the second element
    printf("\nQuestion 5:\n");
    p = &a[1];
    printf("Second element: %d\n", *p);


    // Q6: Modify the first element using p
    printf("\nQuestion 6:\n");
    *(p - 1) = 99;
    printf("First element: %d\n", a[0]);

    // Q7: Pass an array to a function
    printf("\nQuestion 7:\n");

    p = a;
    int *result = modifyArray(p);

    // Display the returned array
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(result + i));
    }

    printf("\n");


    return 0;
}

// Q7: Return a static array to main
int *modifyArray(int *arr) {
    // Declare static array
    static int newArray[5];

    // Copy the values into the static array
    for (int i = 0; i < 5; i++) {
        newArray[i] = *(arr + i);
    }

    // return the array
    return newArray;


}