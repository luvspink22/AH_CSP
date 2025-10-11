//AH period 6 Name decorator - C

#include <stdio.h>
#include <string.h>

//decorating name

#define MAX_NAME 100
#define FWD_DEC ":p "  
#define BWD_DEC " :p"  

int main() {
    char user_name[MAX_NAME] = "Ambar"; 
    char decorated_name[MAX_NAME + 10];

    strcpy(decorated_name, FWD_DEC);
    strcat(decorated_name, user_name);
    strcat(decorated_name, BWD_DEC);

    printf("\nYour decorated name is:\n");
    printf("%s\n", decorated_name);

    return 0;
}
