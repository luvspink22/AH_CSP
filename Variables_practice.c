#AH period 6 Variables Practice-C

#include <stdio.h>

int main(void)
{
    // information
    char name[50] = "John Doe";             
    char school_name[100] = "Springfield High School"; 
    char breakfast[50] = "Oatmeal with berries"; 
    char favorite_color[20] = "Blue";       
    char eye_color[20] = "Brown";          
    char favorite_subject[50] = "Computer Science"; 
  
    // Numbers
    int lucky_number = 7;   
    int current_year = 2025; 
    int age = 16;            

    // Decimal number
    double decimal_number = 342.5; 

    // everything
    printf("OUTPUTS EXAMPLE:\n\n");
    printf("Name: %s\n", name);
    printf("Lucky Number (1-10): %d\n", lucky_number);
    printf("Decimal Number (100-1000): %.1f\n", decimal_number);
    printf("Breakfast: %s\n", breakfast);
    printf("Favorite Color: %s\n", favorite_color);
    printf("School Name: %s\n", school_name);
    printf("Current Year: %d\n", current_year);
    printf("Eye Color: %s\n", eye_color);
    printf("Age: %d\n", age);
    printf("Favorite Subject: %s\n", favorite_subject);

    return 0;
}
