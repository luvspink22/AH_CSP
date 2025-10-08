#AH period 6 Variables Practice-C

#include <stdio.h>

int main(void)
{
    // information
    char name[] = "Ambar";             
    char school_name[] = "UCAS"; 
    char breakfast[] = "Bagel"; 
    char favorite_color[] = "Pink";       
    char eye_color[] = "Dark Brown";          
    char favorite_subject[] = "Art"; 
  
    // Numbers
    int lucky_number = 4;   
    int current_year = 2025; 
    int age = 15;            

    // Decimal number
    double decimal_number = 527.3; // number between 100-1000

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
