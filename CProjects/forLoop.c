#include <stdio.h>
//#include <windows.h> // widnows 
#include <unistd.h> // mac and linux


int main() {
    
    // for loop = Repeat some code a limited # of times
    //            for (Initialization; Condition; Update)

    for (int i = 10; i >= 0; i--) {
        sleep(1);
        printf("%d\n", i);
    }
/*
    // start from 10 and counts down by 3s
    for (int i = 10; i >= 0; i -= 3)
    {
        printf("%d\n", i);
    }


    // start from 10 and counts down to 0
    for (int i = 10; i >= 0; i--) {
        printf("%d\n", i);
    }

    // starts from 1 and counts by 2s
    for (int i = 1; i <= 10; i += 2) {
        printf("%d\n", i);
    }

    // starts at 1 and counts until 100
    for (int i = 1; i <= 100; i++)
    {
        printf("%d\n", i);
    }

*/

    printf("HAPPY NEW YEAR!");

    return 0;
}