#include <stdio.h>

    // return = returns a value back to where you call a function


    
int getMax(int x, int y) {

    if(x >= y) {
        return x;
    } else {
        return y;
    }
}

int main() {

    int max = getMax(4, 5);

    printf("%d", max);

    return 0;
}

/*
#include <stdbool.h>

bool ageCheck(int age) {
    if(age >= 18){
        return true;
    } else {
        return false;
    }
}

int main() {

    int age = 90;

    if(ageCheck(age)) {
        printf("You may sign up");
    } else {
        printf("You must be 18+ to sign up");
    }

    return 0;

}
*/


/*
double cube(double num){
    return num * num * num;
}

double square(double num) {

    double result = num * num;

    return result;
}
*/


/*
int main() {

    double x = cube(2);
    double y = cube(3);
    double z = cube(4);

    printf("%lf\n", x);
    printf("%lf\n", y);
    printf("%lf\n", z);


    return 0;
}

*/


/* 
#include <stdio.h>

int square(int num) {

    int result = num * num;

    return result;
}

int main() {

    int x = square(2);
    int y = square(3);
    int z = square(4);

    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);


    return 0;
}

*/