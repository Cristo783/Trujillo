// Cristobal Trujillo
// Program: structure.c
// Description: Stores and displays information for 2 students 
//              using structures and pointers
// CSC60 Section 5

#include <stdio.h>

#define STUDENTS 2
#define GRADES 3

// Person structure
typedef struct {
    char ssn[12];
    char lname[50];
} person_t;

// Student structure 
typedef struct {
    person_t person;
    int grades[GRADES];
    char *school;
} student_t;

// function prototype
void display(student_t students[]);


int main() {

    int i, j;
    student_t student[STUDENTS];
    char schools[STUDENTS][50];

    // loop to enter info for 2 students
    for (i = 0; i < STUDENTS; i++) {
        printf("\nStudent %d\n", i + 1);

        // SSN
        printf("Enter SSN: ");
        scanf("%11s", student[i].person.ssn);

        // Last name 
        printf("Enter last name: ");
        scanf("%49s", student[i].person.lname);

        // loop to enter 3 grades
        for (j = 0; j < GRADES; j++) {
            printf("\nEnter grade %d: ", j + 1);
            scanf("%d", &student[i].grades[j]);
        }

        // pointer points to the student's school name 
        student[i].school = schools[i];

        // student's school
        printf("\nEnter the school's name: ");
        // getchar removes the leftover newline from scanf
        getchar();
        // fgets allows the school name to have spaces (like Sac State)
        fgets(student[i].school, 50, stdin);
    }

    // calls display function to print students info
    display(student);

    return 0;
}

// function to display student's info
void display(student_t students[]) {

    int i, j;
    // declared a pointer to student structure
    student_t *ptr;

    // loops through each student 
    for (i = 0; i < STUDENTS; i++) {

        // pointer points to student's info
        ptr = &students[i];

        // student's information
        // i + 1 makes the student numbering start at 1
        printf("\nStudent %d\n", i + 1);
        // uses ptr to access student's SSN
        printf("SSN: %s\n", ptr->person.ssn);
        // uses ptr to access student's last name
        printf("Last name: %s\n", ptr->person.lname);

        // displays students 3 grades
        for (j = 0; j < GRADES; j++) {
            printf("Grade %d: %d\n", j + 1, ptr->grades[j]);
        }

        // student's school
        printf("School: %s\n", ptr->school);
    }

}