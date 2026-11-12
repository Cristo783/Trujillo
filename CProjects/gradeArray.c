#include <stdio.h>
#include <stdbool.h>


// functions used in the program
int menu(void);
void Option(int choice, int students[][3], int *studentCount);
void CSC60(int students[][3], int *studentCount);
void displayCSC60(int students[][3], int studentCount);
bool rangeCheck(int number, int minimum, int maximum);
bool duplicateCheck(int students[][3], int studentCount, int studentID);
char letterGrade(double average);


int main(void) {
    int choice;
    // stores the students information in a 5x3 array
    int students[5][3];
    // keeps track of how many students were entered
    int studentCount = 0;

    // keeps showing the menu until the user quits
    do {
        choice = menu();
        // calls Option to process the user's choice
        Option(choice, students, &studentCount);
    } while (choice != 2);

    return 0;
}

// displays the menu and checks the user's choice
int menu(void) {
    int choice;
    bool valid;

    // keeps asking until the user enters 1 or 2
    do {
        printf("1) CSC60\n");
        printf("2) Quit\n");
        scanf("%d", &choice);

        // checks if the choice is between 1 and 2
        valid = rangeCheck(choice, 1, 2);
        if (!valid) {
            printf("Invalid choice. Try again.\n");
        }
    } while (!valid);

    return choice;
}

// uses a switch statement to process the user's choices
void Option(int choice, int students[][3], int *studentCount) {
    switch (choice) {
        case 1:
            // calls CSC60 to enter student information
            CSC60(students, studentCount);
            break;
        case 2:
            // displays all the students when the user quits
            displayCSC60(students, *studentCount);
            break;
        default:
            printf("Invalid choice.\n");
    }

}

// gets the student ID, midterm score, and final score
void CSC60(int students[][3], int *studentCount) {
    int studentID;
    int midterm;
    int finalScore;
    bool valid;

    // checks if the maximum number of students was reached
    if (*studentCount >= 5) {
        printf("You cannot enter more than 5 students.\n");
        return;
    }

    // keeps asking for a student ID until it is valid
    do {
        printf("What is the student ID? ");
        scanf("%d", &studentID);

        // checks if the student ID is between 1 and 50
        valid = rangeCheck(studentID, 1, 50);

        if (!valid) {
            printf("Student ID must be between 1 and 50\n");
        } else if (duplicateCheck(students, *studentCount, studentID)) {
            // checks if the student ID was already entered
            printf("Duplicate ID. Try again.\n");
            valid = false;
        }
    } while (!valid);

    // keeps asking until the midterm score is between 0 and 100
    do {
        printf("What is the midterm score? ");
        scanf("%d", &midterm);
        valid = rangeCheck(midterm, 0, 100);
        if (!valid) {
            printf("Score must be between 0 and 100.\n");
        }
    } while (!valid);

    // keeps asking until the final score is between 0 and 100
    do {
        printf("What is the final score? ");
        scanf("%d", &finalScore);
        valid = rangeCheck(finalScore, 0, 100);
        if (!valid) {
            printf("Score must be between 0 and 100\n");
        }
    } while (!valid);

    // stores student information in the 5x3 array
    students[*studentCount][0] = studentID;
    students[*studentCount][1] = midterm;
    students[*studentCount][2] = finalScore;
    // increases the number of students entered
    (*studentCount)++;
}

// displays all the student information and letter grades
void displayCSC60(int students[][3], int studentCount) {
    double average;
    char grade;

    printf("\nCSC60\n");
    printf("%-12s %-12s %-10s %s\n", "Student ID", "Midterm", "Final", "Grade");
    printf("------------------------------------------------\n");

    // goes through each student that was entered 
    for (int i = 0; i < studentCount; i++) {
        // calculates the average of the midterm and final
        average = (students[i][1] + students[i][2]) / 2.0;
        // calls letterGrade to get the student's grade
        grade = letterGrade(average);
        // displays the student's information 
        printf("%-12d %-12d %-10d %c\n", students[i][0], students[i][1], students[i][2], grade);
    }
}

// checks if a number is within the given range
bool rangeCheck(int number, int minimum, int maximum) {
    if (number >= minimum && number <= maximum) {
        return true;
    }
    return false;


}

// checks if a student ID was already entered
bool duplicateCheck(int students[][3], int studentCount, int studentID) {
    // goes through the existing student IDs
    for (int i = 0; i < studentCount; i++) {
        if (students[i][0] == studentID) {
            return true;
        }
    }
    // returns false if no duplicate was found
    return false;
}

// converts the student's average into a letter grade
char letterGrade(double average) {
    if (average >= 90) {
        return 'A';
    } else if (average >= 80) {
        return 'B';
    } else if (average >= 70) {
        return 'C';
    } else if (average >= 60) {
        return 'D';
    } else {
        return 'F';
    }



}