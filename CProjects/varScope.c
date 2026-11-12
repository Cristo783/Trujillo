// variable scope = Refers to where a variable is recognized and accessible.
//                  Variables can share the same name if
//                  they're in different scopes {}

//int result = 0; // GLOBAL SCOPE (hard to debug)

#include <stdio.h>


int add(int x, int y) {

    int result = x + y;
    return result;

}
int subtract(int x, int y) {

    int result = x - y;
    return result;

}

int main() {

    int result = subtract(3, 4);

    printf("%d", result);
    



    return 0;
}