//AH period 6 My Family Loop - C

#include <stdio.h>

int main() {
    // family names
    char *family[5] = {"Mom", "Dad", "Sister", "Brother", "Grandma"};

    // loop to print names
    for (int i = 0; i < 5; i++) {
        printf("Hello, %s!\n", family[i]);
    }

    return 0;
}
