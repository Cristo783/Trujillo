// While loop = Continue some code WHILE the condition remains true
//              Condition must be true for us to enter while loop


#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    bool isRunning = true;
    char response = '\0';

    do {
        printf("You are playing a game\n");
        printf("Would you like to continue? (Y = yes, N = no): ");
        scanf(" %c", &response);
        
        if (response != 'Y' && response != 'y') {
            isRunning = false;
        }
    } while (isRunning);

    printf("You exit the game");

    /*
        while(isRunning) {
            printf("You are playing a game\n");
            printf("Would you like to continue? (Y = yes, N = no): ");
            scanf(" %c", &response);

            if (response != 'Y' && response != 'y') {
                isRunning = false;
            }
        }
        printf("You exit the loop");
    */
    return 0;
}

/*
int main() {

    char name[50] = "";

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    while(strlen(name) == 0) {
        printf("Name cannot be empty! Please enter your name: ");
        fgets(name, sizeof(name), stdin);
        name[strlen(name) - 1] = '\0';   
    }

    printf("Hello %s", name);

    return 0;
}

*/