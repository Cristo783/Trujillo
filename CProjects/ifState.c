#include <stdio.h>
//#include <stdbool.h>
#include <string.h>

int main() {

    char name[50] = "";

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    if(strlen(name) == 0) {
        printf("You did not enter your name");
    } else {
        printf("Hello %s", name);
    }

    return 0;
}

/*int main() {

    bool isStudent = true;

    if(isStudent) {
        printf("You are a student");
    } else {
        printf("You are NOT a student");
    }

    return 0;
}

*/













/* #include <stdio.h>

int main() { 

    // if statement = Do some code if a condition is true. 
    //                If the condition is false, don't do it.

    int age = 0;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 65) {
        printf("You are a senior");
    }

    else if(age >= 18) {
        printf("You are an adult");
    }
    else if (age >= 65) {
        printf("You are a senior");
    }
    else if(age < 0) {
        printf("You haven't been born yet");
    }
    else if(age == 0) {
        printf("You are a newborn");
    }

    else {
        printf("You are a child");
    }

    return 0;

}
*/