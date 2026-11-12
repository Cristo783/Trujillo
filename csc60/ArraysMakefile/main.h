/*
    Author: Cristobal Trujillo
    File: main.h
    Description: Contains the function prototypes used the program
*/

#ifndef MAIN_H
#define MAIN_H

// displays the menu and returns a valid choice
int menu(void);

// checks the users choice and updates the arrays
void selection(int choice, double data[][2], char choices[], int *count);

// calculates the change from the vending machine
int vendingMachine(void);

// calculates and returns the monthly loan payment
double loan(void);

// displays the stored vending machine prices and loan payments
void display(double data[][2], char choices[], int count);

#endif 