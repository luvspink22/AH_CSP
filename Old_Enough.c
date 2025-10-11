//AH period 6 Old Enough - C

#include <stdio.h>

int main() {
    int age;
    printf("How old are you: ");
    scanf("%d", &age);

    // checking if the person is old enough 
    if (age >= 18) {
        printf("You are old enough to vote and drive!\n");
    } else if (age >= 16) {
        printf("You are old enough to drive!\n");
    } else if (age >= 15) {
        printf("You are old enough to get a learners permit!\n");
    } else if (age >= 5) {
        printf("You are old enough to go to school!\n");
    } else {
        printf("You are not old enough for any of these, sorry :(.\n");
    }

    return 0;
}
