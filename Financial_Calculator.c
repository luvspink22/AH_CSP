#AH period 6 Financial Calculator-C

#include <stdio.h>

// percent of income
int calculate_percentage(double amount, double income) {
    if (income <= 0.0) {
        return 0;
    }
    double pct = (amount / income) * 100.0;
    return (int)(pct + 0.5);
}

int main() {
    // Asking for users' input
    double monthly_income;
    double rent;
    double utilities;
    double groceries;
    double transportation;

    printf("What is your monthly income: ");
    scanf("%lf", &monthly_income);

    printf("What is your monthly rent/mortgage: ");
    scanf("%lf", &rent);

    printf("What is your monthly utilities: ");
    scanf("%lf", &utilities);

    printf("What is your monthly groceries: ");
    scanf("%lf", &groceries);

    printf("What is your monthly transportation: ");
    scanf("%lf", &transportation);

    // calculations
    const double SAVINGS_RATE = 0.10;
    double total_expenses = rent + utilities + groceries + transportation;
    double monthly_savings = monthly_income * SAVINGS_RATE;
    double spendable_income = monthly_income - (total_expenses + monthly_savings);

    int rent_pct = calculate_percentage(rent, monthly_income);
    int utilities_pct = calculate_percentage(utilities, monthly_income);
    int groceries_pct = calculate_percentage(groceries, monthly_income);
    int transportation_pct = calculate_percentage(transportation, monthly_income);
    int savings_pct = calculate_percentage(monthly_savings, monthly_income);

    // results
    printf("\nYour rent is $%.2lf and that is %d%% of your income.\n", rent, rent_pct);
    printf("Your utilities are $%.2lf and that is %d%% of your income.\n", utilities, utilities_pct);
    printf("Your groceries are $%.2lf and that is %d%% of your income.\n", groceries, groceries_pct);
    printf("Your transportation is $%.2lf and that is %d%% of your income.\n", transportation, transportation_pct);
    printf("You should save $%.2lf a month, that is %d%% of your income.\n", monthly_savings, savings_pct);
    printf("You have $%.2lf of spending money each month!\n", spendable_income);

    return 0;
}
