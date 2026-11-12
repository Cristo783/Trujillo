#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// formula to make pseudo random number 
// (rand() % (max - min + 1)) + min;

int main() {

    srand(time(NULL));

    int min = 50;
    int max = 100;

    int randomNum1 = (rand() % (max - min + 1)) + min;
    int randomNum2 = (rand() % (max - min + 1)) + min;
    int randomNum3 = (rand() % (max - min + 1)) + min;
    

    //int randomNum = (rand() % max) + min;

    printf("%d %d %d", randomNum1, randomNum2, randomNum3);

    //printf("%d", rand());

    return 0;
}




    // Pseudo-random = Appear random but are determined by a
    //                 mathematical formula that uses a seed value
    //                 to generate a predictable sequence of numbers.
    //                 advanced: Mersenne Twister or /dev/random