#AH, Class 6, Finacial Calculator-python

# Personal Finance Calculator

# Get user input
income = float(input("What is your monthly income: "))

rent = float(input("What is your monthly rent/mortgage: "))
utilities = float(input("What is your monthly utilities: "))
groceries = float(input("What is your monthly groceries: "))
transportation = float(input("What is your monthly transportation: "))

# Percent calculations
rent_percent = (rent / income) * 100
utilities_percent = (utilities / income) * 100
groceries_percent = (groceries / income) * 100
transport_percent = (transportation / income) * 100

# Savings = 10% of income
savings = income * 0.10

# Spending money left after expenses and savings
leftover = income - (rent + utilities + groceries + transportation + savings)

# Outputs
print(f"\nYour rent is ${rent:.2f} and that is {rent_percent:.0f}% of your income.")
print(f"Your utilities are ${utilities:.2f} and that is {utilities_percent:.0f}% of your income.")
print(f"Your groceries are ${groceries:.2f} and that is {groceries_percent:.0f}% of your income.")
print(f"Your transportation is ${transportation:.2f} and that is {transport_percent:.0f}% of your income.")

print(f"\nYou should save ${savings:.2f} a month, that is 10% of your income.")
print(f"You have ${leftover:.2f} of spending money each month!")
