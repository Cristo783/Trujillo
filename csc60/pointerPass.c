#include <stdio.h>

void passA(float value, float *address);
void passB(float *value, float **address);
void passC(float **value, float ***address);
void passD(void *value, void **address);

int main() {

    // Q1: Declaring and initializing variables
    float a = 5.5f;
    float *b = &a;
    float **c = &b;
    void *d = &c;


    // Q2: Pass a and the address of a
    printf("Question 2:\n");
    passA(a, &a);


    // Q3: Pass b and the address of b
    printf("\nQuestion 3:\n");
    passB(b, &b);


    // Q4: Pass c and the address of c
    printf("\nQuestion 4:\n");
    passC(c, &c);
    
    
    // Q5: Pass d and the address of d
    printf("\nQuestion 5:\n");
    passD(d, &d);

    return 0;
}

// Q2: Display 'a' using the second argument
void passA(float value, float *address) {
    // Dereference address to get the value of 'a'
    printf("a = %.1f\n", *address);
}

// Q3: Display 'a' using the second argument
void passB(float *value, float **address) {
    // Dereference twice to get the value
    printf("a = %.1f\n", **address);
}

// Q4: Display 'a' using the second argument
void passC(float **value, float ***address) {
    // Dereference three times to get the value of 'a' 
    printf("a = %.1f\n", ***address);
}

// Q5: Display 'a' using the second argument
void passD(void *value, void **address) {
    // Used a triple pointer to access 'a'
    float ***ptr = *address;
    // Dereferences three times to get the value of 'a'
    printf("a = %.1f\n", ***ptr);
}
