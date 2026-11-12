#include <stdio.h>

typedef int Number;
typedef char String[50];
typedef char Initials[3];

int main() {

    //String name = "Cris Trujillo";

    Initials user1 = "CT";
    Initials user2 = "SS";
    Initials user3 = "PS";
    Initials user4 = "ST";

    printf("%s\n", user1);
    printf("%s\n", user2);
    printf("%s\n", user3);
    printf("%s\n", user4);

    return 0;
}

/*
typedef int Number;

int main() {

    // typedef = reserved keyword that gives an existing datatype a "nickname"
    //           Helps simplify complex types and improves code readability

    //           typedef existing_type new_name;


    Number x = 3;
    Number y = 4;
    Number z = x + y;

    printf("%d", z);





    return 0;
}
*/