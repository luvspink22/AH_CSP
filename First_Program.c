#AH period 6 First Program-C

#include <stdio.h>

int main() {
    char name[50];

    //Asks for name
    printf("Enter your name: ");
    fgets(name, 50, stdin);

    // Get rid of the Enter key at the end if it's there
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == '\n') {
            name[i] = '\0';
            break;
        }
    }

    // Say hello
    printf("Hello, %s! Welcome to C.\n", name);

    return 0;
}
