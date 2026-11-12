// Cristobal Trujillo
// Program: stringStrTok.c
// Description: Stores class names using arrays
//              and separates strings using string functions
// CSC60 05


#include <stdio.h>
#include <string.h>

int main() {

    // Q1: 4 by 10 character array
    char classes[4][10];

    // Q2: array for three classes 
    char list[50];

    // Q3: array for strchr
    char split[3][10];

    // Q4: array for strtok
    char split2[3][10] = {0};

    // Q5: array for strstr
    char split3[3][10] = {0};

    // other variables
    char copy[50];
    char *token;
    char *start;
    char *semi;
    int i;
    int length;

    // Part 1: first two rows with scanf
    for (i = 0; i < 2; i++) {
        printf("Enter class %d: ", i + 1);
        scanf("%9s", classes[i]);
    }

    // clears the leftover newline from scanf
    getchar();

    // clears the input buffer
    fflush(stdin);

    // last two rows with fgets
    // tried to use gets but would not compile
    for (i = 2; i < 4; i++) {
        printf("Enter class %d: ", i + 1);
        fgets(classes[i], 10, stdin);

        // removes the newline character
        classes[i][strcspn(classes[i], "\n")] = '\0';
    }

    // displays the 2D array
    printf("\nClasses:\n");
    for (i = 0; i < 4; i++) {
        printf("Class %d: %s\n", i + 1, classes[i]);
    }

    // Part 2: asks user for 3 classes separated by semicolons
    printf("\nEnter 3 classes separated by ';': ");
    fgets(list, 50, stdin);
    list[strcspn(list, "\n")] = '\0';

    printf("You entered: %s\n", list);

    // Part 3: separates the classes using strchr
    start = list;
    for (i = 0; i < 3; i++) {
        semi = strchr(start, ';');

        if (semi != NULL) {
            // gets length before semicolon
            length = semi - start;

            // limits the class to 9 characters
            if (length > 9) {
                length = 9;

            }
            // copies class without semicolon
            strncpy(split[i], start, length);
            split[i][length] = '\0';

            // moves to next class
            start = semi + 1;
        } else {
            // last class has no semicolon after it
            strncpy(split[i], start, 9);
            split[i][9] = '\0';
            break;
        }
    }
    // prints the classes using strchr
    printf("\nUsing strchr:\n");
    for (i = 0; i < 3; i++) {
        printf("Class %d: %s\n", i + 1, split[i]);
    }

    // Part 4: separates the classes using strtok
    // copies list because strtok changes the original string
    strcpy(copy, list);
    // gets first class
    token = strtok(copy, ";");
    i = 0;

    // stores each class in the array
    while (token != NULL && i < 3) {
        strncpy(split2[i], token, 9);
        split2[i][9] = '\0';

        i++;
        token = strtok(NULL, ";");

    }

    // prints the classes using strtok
    printf("\nUsing strtok:\n");

    for (i = 0; i < 3; i++) {
        printf("Class %d: %s\n", i + 1, split2[i]);
    }

    // Part 5: separates the classes using strstr
    start = list;

    for (i = 0; i < 3; i++) {
        semi = strstr(start, ";");

        if (semi != NULL) {
            // gets length before semicolon
            length = semi - start;

            // limits the class to 9 characters
            if (length > 9) {
                length = 9;
            }
            // copies class without semicolon
            strncpy(split3[i], start, length);
            split3[i][length] = '\0';

            // moves to next class
            start = semi + 1;
        } else {
            // last class has no semicolon after it
            strncpy(split3[i], start, 9);
            split3[i][9] = '\0';
            break;
        }
    }

    // prints the classes using strstr
    printf("\nUsing strstr:\n");

    for (i = 0; i < 3; i++) {
        printf("Class %d: %s\n", i + 1, split3[i]);
    }

    return 0;
}