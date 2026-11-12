/*
    Author: Cristobal Trujillo
    File: display.c
    Description: Displays the stored vending machine prices and loan payments
                 and the totals for each column in the array


*/

#include <stdio.h>
#include "main.h"

void display(double data[][2], char choices[], int count) {
    double vendingTotal = 0;
    double loanTotal = 0;

    // displays the names for the columns
    printf("\n%-20s %-15s\n", "Vending", "Payment");

    for (int i = 0; i < count; i++) {
        // checks if the user chose vending machine
        if (choices[i] == 'V') {
            // displays the price from the first column of the array
            printf("$%-19.2f\n", data[i][0]);

            // adds the vending price to the total
            vendingTotal += data[i][0];
        } else if (choices[i] == 'L') {
            // displays the monthly payment from the second column
            printf("%20s $%-10.2f\n", "", data[i][1]);

            // adds the monthly payment to the loan total
            loanTotal += data[i][1];
        }
    }

    printf("======================================\n");

    // displays the totals for the vending machine and loan
    printf("Total: $%-12.2f", vendingTotal);
    printf(" $%.2f\n", loanTotal);
}