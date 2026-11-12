#include <stdio.h>
#include <string.h>

int main() {

    //printf("Hello\n");

    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[50] = "";

    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Enter your gpa: ");
    scanf("%f", &gpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade);


    getchar();
    printf("Enter you full name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';



    printf("%s\n", name);
    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);
    //printf("%s\n", name);


    return 0;
}