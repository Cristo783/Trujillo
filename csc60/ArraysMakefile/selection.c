/*
    Author: Cristobal Trujillo
    File: selection.c
    Description: Contains the vending machine and loan functions
*/


#include <stdio.h>
#include <math.h>
#include "main.h"



int vendingMachine(void) {
    // stores info for the vending machine
    int price;
    int change;
    int quarters;
    int dimes;
    int nickels;

    do {
        printf("Enter price of item in cents: ");
        scanf("%d", &price);

        // price has to be at least 25 cents, less than a dollar and divisible by 5
        if (price < 25 || price >= 100 || price % 5 != 0) {
            // if not then it asks user to try again
            printf("Invalid price. Try again.\n");
        }
        // if the price is valid then it exits the loop
    } while (price < 25 || price >= 100 || price % 5 != 0);

    // calculations to give change back
    // subtracts price from a dollar to find change
    change = 100 - price;
    // divides change by 25 to find number of quarters 
    quarters = change / 25;
    // stores the remaining change after quarters
    change = change % 25;
    // divides remaining change by 10 to find number of dimes
    dimes = change / 10;
    // stores the remaining change after dimes
    change = change % 10;
    // divides remaining change by 5 to find number of nickels
    nickels = change / 5;

    // displays the price of the item and the coins given back 
    printf("You bought an item for %d cents and gave me a dollar\n", price);
    printf("so your change is:\n");
    printf("%d quarters,\n", quarters);
    printf("%d dimes,\n", dimes);
    printf("%d nickels\n\n", nickels);

    // returns the price of the item to selection
    return price;
}

double loan(void) {
    // stores information about the loan
    double L;
    double Rate;
    double payment;
    double amountPaidBack;
    double interestPaid;
    double n;

    // asks the user for information about the loan
    printf("Enter loan amount: ");
    scanf("%lf", &L);

    printf("Enter annual interest rate: ");
    scanf("%lf", &Rate);

    printf("Enter number of payments: ");
    scanf("%lf", &n);

    // converts monthly interest rate from percent to decimal
    Rate = Rate / 12 / 100;

    // checks if loan has no interest
    if (Rate == 0) {
        // if theres no interest divide loan by number of payments
        payment = L / n;
    } else {
        // calculates monthly payment using loan formula
        payment = (Rate * pow(1 + Rate, n) / (pow(1 + Rate, n) - 1)) * L;
    }

    // multiplies monthly payment by the number of payments
    amountPaidBack = payment * n;
    
    // subtracts loan amount to find total interest
    interestPaid = amountPaidBack - L;

    // displays the results of the loan calculations 
    printf("%-25s $ %12.2f\n", "Loan Amount: ", L);
    printf("%-25s   %12.0f\n", "Monthly Interest Rate: ", Rate * 100);
    printf("%-25s   %12.0f\n", "Number of Payments: ", n);
    printf("%-25s $ %12.2f\n", "Monthly Payment: ", payment);
    printf("%-25s $ %12.2f\n", "Amount Paid Back: ", amountPaidBack);
    printf("%-25s $ %12.2f\n", "Interest Paid: ", interestPaid);

    return payment;
}