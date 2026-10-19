/*
    Author: Cristobal Trujillo
    File: vendingLoan.c
    Description: Program gives user 3 choices.
                 They can use the vending machine, calculate a loan, or quit.
                 Vending machine calculates change from a dollar.
                 Loan calculates monthly payments and interest.
                 When user quits it displays total amount spent.


*/

#include <stdio.h>
#include <math.h>

// defined constants
#define VENDING 1
#define LOAN 2
#define QUIT 3

// functions used in the program
int menu(void);
int selection(int choice, int totalSpent);
int vendingMachine(void);
void loan(void);

int main(void)
{
    int choice;
    // starts at 0 and keeps track of money spent
    int totalSpent = 0;

    // do-while loop
    // keeps showing the menu until the user chooses quit
    do
    {
        choice = menu();
        // calls slection to see what the user chooses
        totalSpent = selection(choice, totalSpent);
    } while (choice != QUIT);

    return 0;
}

int menu(void)
{
    int choice;

    // displays menu and asks user to pick an option
    do
    {

        printf("1) Vending machine\n");
        printf("2) Loan\n");
        printf("3) Quit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        // checks if user enetered a number smaller than 1 or bigger than 3
        if (choice < 1 || choice > 3)
        {
            printf("Invalid choice. Try again.\n");
        }
        // if its between them then it returns choice 
    } while (choice < 1 || choice > 3);

    return choice;
}

int selection(int choice, int totalSpent)
{
    // checks what option the user picked
    switch (choice)
    {
    case VENDING:
        // calls vendingMachine and adds the price of an item to the totalSpent
        totalSpent = totalSpent + vendingMachine();
        break;

    case LOAN:
        // calls loan function
        loan();
        break;

    case QUIT:
        // displays how much the user spent before quitting
        printf("Grand total spent on vending machine: %d cents\n", totalSpent);
        break;

    default:
        // displays error message if choice is invalid
        printf("Invalid choice.\n");
        break;
    }
    // returns the updated totalSpent to main
    return totalSpent;
}

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

        // price has to be at least 25 cents, less than a dollar or divisble by 5
        if (price < 25 || price >= 100 || price % 5 != 0) {
            // if not then it asks user to try again
            printf("Invalid price. Try again.\n");
        }
        // if it is those things then continue in the loop
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
    // stores the remaining change by 10 to find the number of dimes
    change = change % 10;
    // divides remaining change by 5 to find number of nickels
    nickels = change / 5;

    // displays the price of the item and the coins given back 
    printf("You bought an item for %d cents and gave me a dollar\n", price);
    printf("so your change is:\n");
    printf("%d quarters,\n", quarters);
    printf("%d dimes,\n", dimes);
    printf("%d nickels\n\n", nickels);

    return price;
}

void loan(void) {
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

    // converts annual interest rate to monthly rate
    Rate = Rate / 100;

    // checks if loan has no interest
    if (payment == 0) {
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
    printf("%-25s   %12.2f\n", "Monthly Payment: ", payment);
    printf("%-25s $ %12.2f\n", "Amount Paid Back: ", amountPaidBack);
    printf("%-25s $ %12.2f\n", "Interest Paid: ", interestPaid);

    return;
}
