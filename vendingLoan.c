#include <stdio.h>
#include <math.h>

#define VENDING 1
#define LOAN 2
#define QUIT 3

int menu(void);
int selection(int choice, int totalSpent);
int vendingMachine(void);
void loan(void);

int main(void)
{

    int choice;
    int totalSpent = 0;

    do
    {
        choice = menu();
        totalSpent = selection(choice, totalSpent);
    } while (choice != QUIT);

    return 0;
}

int menu(void)
{
    int choice;

    do
    {

        printf("1) Vending machine\n");
        printf("2) Loan\n");
        printf("3) Quit");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice < 1 || choice > 3)
        {
            printf("Invalid choice. Try again.\n");
        }
    } while (choice < 1 || choice > 3);

    return choice;
}

int selection(int choice, int totalSpent)
{

    switch (choice)
    {
    case VENDING:
        totalSpent = totalSpent + vendingMachine();
        break;

    case LOAN:
        loan();
        break;

    case QUIT:
        printf("Grand total spent on veing machine: %d cents\n", totalSpent);
        break;

    default:
        printf("Invalid choice.\n");
        break;
    }

    return totalSpent;
}

int vendingMachine(void) {
    int price;
    int change;
    int quarters;
    int dimes;
    int nickels;

    do {
        printf("Enter price of item in cents: ");
        scanf("%d", &price);

        if (price < 25 || price >= 100 || price % 5 != 0) {
            printf("Invalid price. Try again.\n");
        }
    } while (price < 25 || price >= 100 || price % 5 != 0);

    change = 100 - price;

    quarters = change / 25;

    change = change % 25;

    dimes = change / 10;
    change = change % 10;

    nickels = change / 5;

    printf("You bought an item for %d cents and game me a dollar\n", price);
    printf("so your change is:\n");
    printf("%d quarters,\n", quarters);
    printf("%d dimes, and\n", dimes);
    printf("%d nickels.\n", nickels);

    return price;
}

void loan(void) {
    double loanAmount;
    double interestRate;
    double monthlyRate;
    double payments;
    double monthlyPayment;
    double amountPaidBack;
    double interestPaid;

    printf("Enter loan amount: ");
    scanf("%lf", &loanAmount);

    printf("Enter annual interest rate: ");
    scanf("%lf", &interestRate);

    printf("Enter number of payments: ");
    scanf("%lf", &payments);

    monthlyRate = interestRate / 12 / 100;

    if (monthlyRate == 0) {
        monthlyPayment = loanAmount / payments;
    } else {
        monthlyPayment = loanAmount * monthlyRate * pow(1 + monthlyRate, payments) / (pow(1 + monthlyRate, payments) - 1);
    }

    amountPaidBack = monthlyPayment * payments;
    interestPaid = amountPaidBack - loanAmount;

    printf("%-25s $ %12.2f\n", "Loan Amount: ", loanAmount);
    printf("%-25s %14.2f\n", "Monthly Interest Rate: ", monthlyRate * 100);
    printf("%-25s %14.0f\n", "Number of Payments: ", payments);
    printf("%-25s %12.2f\n", "Monthly Payment: ", monthlyPayment);
    printf("%-25s $ %12.2f\n", "Amount Paid Back: ", amountPaidBack);
    printf("%-25s $ %12.2f\n", "Interest Paid: ", interestPaid);

    return;
}