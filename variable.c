#include <stdio.h>
#include <stdbool.h>


int main() {

    // variable = A reusable container for a value.
    //            Behaves as if it were the value it contains
    
    // int = whole numbers (4 bytes in modern systems)
    // float = single-precision decimal number (4 bytes)
    // double = double-precision decimal number (8 bytes)
    // char = single character (1 byte)
    // char[] = array of characters (size vaires)
    // bool = true or false (1 byte, requires <stdbool.h>)



    bool isOnline = true;
    bool isStudent = true;
    bool forSale = false;


    if(forSale) {
        printf("That item is for sale\n");
    } else {
        printf("That item is not for sale\n");
    }

    
    
    
    
    //printf("%d\n", isOnline);








    //char name[] = "Cristobal Trujillo";
    //char food[] = "Pasta";
    //char email[] = "fake123@gmail.com";

    //printf("Hello %s\n", name);
    //printf("Your favorite food is %s\n", food);
    //printf("Your email is %s\n", email);



    //char grade = 'A';
    //char symbol = '!';
    //char currency = '$';

    //printf("Your grade is %c\n", grade);
    //printf("Your favorite symbol is %c\n", symbol);
    //printf("The currency is %c\n", currency);






    //double pi = 3.14159265358979;
    //double e = 2.7182818284590;
    
    //printf("The vlaue of pi is %.15lf\n", pi);
    //printf("The value of e is %.15lf\n", e);



    //float gpa = 2.5;
    //float price = 19.99;
    //float temperature = -10.1;

    //printf("Your gpa is %.1f\n", gpa);
    //printf("The price is $%.2f\n", price);
    //printf("The temperature is %.1f°F\n", temperature);









    //int age = 25;
    //int year = 2026;
    //int quantity = 2; //whole numbers

    //printf("You are %d years old\n", age);
    //printf("The year is %d\n", year);
    //printf("Your have ordered %d x items\n", quantity);


    return 0;
}