#include <stdio.h>

int main() {
    
    // switch = An alternative to using many if-else statements
    //          More efficient w/ fixed integer values

    //int dayOfWeek = 0;
    char dayOfWeek = '\0';

    //printf("Enter a day of the week (1 - 7) ");
    //scanf("%d", &dayOfWeek);

    printf("Enter a day of the week (M, T, W, R, F, S, U): ");
    scanf("%c", &dayOfWeek);

    switch(dayOfWeek) {
        case 'M':
            printf("It is Monday");
            break;
        case 'T':
            printf("It is Tuesday");
            break;
        case 'W':
            printf("It is Wednesday");
            break;
        case 'R':
            printf("It is Thursday");
            break;
        case 'F':
            printf("It is Friday");
            break;
        case 'S':
            printf("It is Saturday");
            break;
        case 'U':
            printf("It is Sunday");
            break;
        default:
            //printf("Please only enter a number (1 - 7)");
            printf("Please only enter a character (M, T, W, R, F, S, U)");
        }








    // If you use a lot of else-if statements then use switch statement
    /*
    int dayOfWeek = 5;

    if(dayOfWeek == 1) {
        printf("It is Monday");
    } else if (dayOfWeek == 2) {
        printf("It is Tuesday");
    } else if (dayOfWeek == 3) {
        printf("It is Wednesday");
    } else if (dayOfWeek == 4) {
        printf("It is Thursday");
    } else if (dayOfWeek == 5) {
        printf("It is Friday");
    } else if (dayOfWeek == 6) {
        printf("It is Saturday");
    } else if (dayOfWeek == 7) {
        printf("It is Sunday");
    } else {
        printf("Please enter a number (1 - 7)");
    }

    return 0;
*/
}
