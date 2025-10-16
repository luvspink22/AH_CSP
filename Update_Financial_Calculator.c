//AH period 6 Update your Financial Calculator - C

#include <stdio.h>

// Defining the structure to hold data
struct FinancialData {
    float income;
    float rent;
    float utilities;
    float groceries;
    float transportation;
};

void get_user_inputs(struct FinancialData *data) {
    printf("--- Financial Calculator Input ---\n");

  // getting all of the information
    printf("What is your monthly income: ");
    scanf("%f", &data->income);
    
    printf("What is your monthly rent/mortgage: ");
    scanf("%f", &data->rent);
    
    printf("What is your monthly utilities: ");
    scanf("%f", &data->utilities);
    
    printf("What is your monthly groceries: ");
    scanf("%f", &data->groceries);
    
    printf("What is your monthly transportation: ");
    scanf("%f", &data->transportation);
}

void calculate_percentages(struct FinancialData data) {
    
    const float SAVINGS_RATE = 0.10f; 
    
    float total_expenses = 0;
    float savings_amount = data.income * SAVINGS_RATE;
    
    printf("\n--- Financial Summary ---\n");

    float expenses[] = {data.rent, data.utilities, data.groceries, data.transportation};
    const char *expense_names[] = {"rent", "utilities", "groceries", "transportation"};
    
  
    for (int i = 0; i < 4; i++) {
        float percent = (expenses[i] / data.income) * 100.0f;
        
        printf(
            "Your %s are $%.2f and that is %.0f%% of your income.\n", 
            expense_names[i], 
            expenses[i], 
            percent
        );
        total_expenses += expenses[i];
    }
    
    // Calculations 
    printf("\nYou should save $%.2f a month, that is %.0f%% of your income.\n", 
           savings_amount, SAVINGS_RATE * 100.0f);
    
    float spending_money = data.income - total_expenses - savings_amount;
    printf("You have $%.2f of spending money each month!\n", spending_money);
}

int main() {
    struct FinancialData my_budget;
    

    get_user_inputs(&my_budget);
    calculate_percentages(my_budget);
    
    return 0;
}
