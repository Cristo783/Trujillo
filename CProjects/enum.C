#include <stdio.h>

typedef enum {
    SUCCESS, FAILURE, PENDING
}Status;

void connectStatus(Status status);

int main() {

    Status status = SUCCESS;

    connectStatus(status);

    return 0;
}

void connectStatus(Status status) {

    switch(status) {
        case SUCCESS:
            printf("Connection was succesful\n");
            break;
        case FAILURE:
            printf("Could not connect\n");
            break;
        case PENDING:
            printf("Connecting...\n");
            break;
        }
}


/*

typedef enum{
    SUNDAY = 1, MONDAY = 2, TUESDAY = 3, WEDNESDAY = 4, 
    THURSDAY = 5, FRIDAY = 6, SATURDAY = 7
}Day;

    Day today = MONDAY;

    if (today == SUNDAY || today == SATURDAY) {
        printf("It's the weekend");
    } else {
        printf("It's a weekday");
    }
*/



    // enum = A user-defined data type that consists
    //        of a set of named integer constants.
    //        Benefit: Replace numbers with readable names

    // SUNDAY = 0;
    // MONDAY = 1;
    // TUESDAY = 2;