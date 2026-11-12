/*
    Author: Cristobal Trujillo
    File: smallerBigger.c
    Descriptions: Asks user to type in 2 even and 2 odd number. 
                  Program then checks what is the smallest even number and smallest odd number.
                  It then prints it out
*/

#include <stdio.h>

int main() {

    // values stored in int variables
    int num1;
    int num2;
    int num3;
    int num4;

    // I set both smallestOddNum and smallestEvenNum to 0
    // so the program has a starting value before they compare numbers

    // int variable that stores the smallest odd number 
    int smallestOddNum = 0;
    // int variable that stores the smallest even number
    int smallestEvenNum = 0;


    // asks user for first number
    printf("Enter a number: ");
    scanf("%d", &num1);
    // checks if the number has a remainder. If it does then its odd
    if (num1 % 2 != 0) {
        // checks if smallestOddNum is 0 or if num1 is smaller than current value in smallestOddNum 
        if (smallestOddNum == 0 || num1 < smallestOddNum) {
            // if either case is true then it stores num1 as the smallest odd number
            smallestOddNum = num1;
        }
    } else {
        // if the number is even then it checks if smallestEvenNum is 0 or if num1 is smaller than current value in smallestEvenNum
        if (smallestEvenNum == 0 || num1 < smallestEvenNum) {
            // if its either case is true then it stores num1 as the smallest even number
            smallestEvenNum = num1;
        }
    }

    /* I had to check if smallestEvenNum or smallestOddNum is 0
       because both variables start at 0. If either one is still 0
       then the program stores first odd or even number it finds.
    */

    // Next three blocks of code do the same instructions num1 followed but for the 2nd, 3rd, and 4th numbers

    // asks user for second number
    printf("Enter a number: ");
    scanf("%d", &num2);
    if (num2 % 2 != 0) {
        if (smallestOddNum == 0 || num2 < smallestOddNum) {
            smallestOddNum = num2;
        }
    } else {
        if (smallestEvenNum == 0 || num2 < smallestEvenNum) {
            smallestEvenNum = num2;
        }
    }

    // asks user for third number
    printf("Enter a number: ");
    scanf("%d", &num3);
    if (num3 % 2 != 0) {
        if (smallestOddNum == 0 || num3 < smallestOddNum) {
            smallestOddNum = num3;
        }
    } else {
        if (smallestEvenNum == 0 || num3 < smallestEvenNum) {
            smallestEvenNum = num3;
        }
    }

    // asks user for fourth number
    printf("Enter a number: ");
    scanf("%d", &num4);
    if (num4 % 2 != 0) {
        if (smallestOddNum == 0 || num4 < smallestOddNum) {
            smallestOddNum = num4;
        }
    } else {
        if (smallestEvenNum == 0 || num4 < smallestEvenNum) {
            smallestEvenNum = num4;
        }
    }

    // displays the smallest even number
    printf("The smallest even number is %d\n", smallestEvenNum);

    // displays the smallest odd number
    printf("The smallest odd number is %d\n", smallestOddNum);

    return 0;
}