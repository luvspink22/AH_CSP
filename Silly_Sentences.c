//AH period 6 silly Sentences - C

#include <stdio.h>
#include <string.h>

int main() {
    char item[50];
    char reaction[50];
    char ending[50];

    // asking for words
    printf("Enter something the duck wants: ");
    fgets(item, sizeof(item), stdin);
    item[strcspn(item, "\n")] = 0;

    printf("Enter the man's reaction: ");
    fgets(reaction, sizeof(reaction), stdin);
    reaction[strcspn(reaction, "\n")] = 0;

    printf("Enter how it ends: ");
    fgets(ending, sizeof(ending), stdin);
    ending[strcspn(ending, "\n")] = 0;

    printf("\nDuck: Got any %s?\n", item);
    printf("Man: %s!\n", reaction);
    printf("Duck: Waddle waddle... %s.\n", ending);

    return 0;
}
