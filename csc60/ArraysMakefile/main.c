/*
    Author: Cristobal Trujillo
    File: main.c
    Description: Program allows user to use a vending machine, 
                 calculate loan payments, display stored values,
                 or quit
            
*/

#include <stdio.h>
#include <math.h>
#include "main.h"

#define VENDING 1
#define LOAN 2
#define DISPLAY 3
#define QUIT 4

int main(void) {

    int choice;

    // 1-D Array
    // stores which option the user chose 
    char choices[5] = {0};

    // 2-D Array
    // stores the vending machine prices and monthly loan payments 
    double data[5][2] = {{0}};

    // keeps track of how many entries are being entered
    int count = 0;

    // keeps showing the menu until the user quits
    do {
        choice = menu();
        // calls selection to process the users choice
        selection(choice, data, choices, &count);
    } while (choice != QUIT);
    return 0;
}

int menu(void) {
    int choice;

    // displays the menu until the user enters a valid choice
    do {
        printf("\n1) Vending machine\n");
        printf("2) Loan\n");
        printf("3) Display\n");
        printf("4) Quit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        // checks if the user entered an invalid choice 
        if (choice < 1 || choice > 4) {
            printf("Invalid choice. Try again.\n");
        }
    } while (choice < 1 || choice > 4);
    return choice;
}

void selection(int choice, double data[][2], char choices[], int *count) {
    // checks which option the user entered
    switch (choice) {
        case VENDING:
            // checks if the array is full
            if (*count >= 5) {
                printf("Error: Maximum of 5 entries reached.\n");
            } else {
                // stores the vending machine prices in the first column
                data[*count][0] = vendingMachine() / 100.0;

                // if user chooses choice 1 it stores V to represent vending machine 
                choices[*count] = 'V';
                (*count)++;
            }
            break;


        case LOAN:
            // checks if the array is full 
            if (*count >= 5) {
                printf("Error: Maximum of 5 entries reached.\n");
            } else {
                // stores monthly payment in the second column
                data[*count][1] = loan();

                // if user chooses option 2 it stores L to represent Loan
                choices[*count] = 'L';
                (*count)++;
            }
            break;

        case DISPLAY:
            // calls displays to show the stored value  
            display(data, choices, *count);
            break;
        

        case QUIT: {
            // keeps track of the total
            double total = 0;

            for (int i = 0; i < *count; i++) {
                total += data[i][0];
                total += data[i][1];
            }

            // displays the grand total before quitting
            printf("\nGrand Total: $%.2f\n", total);
            break;
        }

        default:
            // error message if the user enters an invalid choice
            printf("Invalid choice.\n");
            break;
        }
    }

