#include <stdio.h>
#include <string.h>

int main() {

    // EXCERCISE

    char names[4][25] = {0};
    int rows = sizeof(names) / sizeof(names[0]);

    for (int i = 0; i < 4; i++) {
        printf("Enter a name: ");
        fgets(names[i], sizeof(names[0]), stdin);
        names[i][strlen(names[i]) - 1] = '\0';
    }

    for (int i = 0; i < 4; i++) {
        printf("%s\n", names[i]);
    }

        // Array of Strings
        /*
            char fruits[][10] = {
                "Apple",
                "Banana",
                "Coconut",
            };

            int size = sizeof(fruits) / sizeof(fruits[0]);

            fruits[0][0] = 'e';
            fruits[0][4] = 'A';

            fruits[1][0] = 'a';
            fruits[0][5] = 'B';

            fruits[2][0] = 't';
            fruits[2][6] = 'C';

            for (int i = 0; i < size; i++) {
                printf("%s\n", fruits[i]);
            }
        */
        return 0;
}