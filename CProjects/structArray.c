#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct{
    int a[2][3];
} Test;

void * func1(Test ***ppp_temp);
void * func2(int *a, int *b);

int main() {
    int *avg;
    Test temp;
    Test *p_temp = &temp;
    Test **pp_temp = &p_temp;
    
    srand(time(NULL));
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            temp.a[i][j] = rand() % 16 + 5;
    //*(*(temp.a+i) + j);
    avg = (int *)func1(&pp_temp);
    printf("%d", *avg);
}

void * func1(Test ***ppp_temp) {
    void *avg;
    avg = func2((***ppp_temp).a[0], (***ppp_temp).a[1]);
    return avg;
}

void * func2(int *a, int *b) {
    int *hi0 = a;
    int *hi1 = b;
    static int avg;
    for (int i = 1; i < 3; i++) {
        if (*hi0 < *(a+i))
        hi0 = a + i;
        if (*hi1 < *(b+i))
        hi1 = b + i;

    }

    avg = (*hi0 + *hi1) / 2;
    return (&avg);
}