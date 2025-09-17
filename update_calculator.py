# AH 6th period Update Financial Calculator - Python 

# function to get user input as a number
def get_input(text):
    return float(input(text))

# function to find percent of income
def calc_percent(income, cost):
    return (cost / income) * 100

def main():
    income = get_input("Monthly income: ")
    rent = get_input("Rent: ")
    utilities = get_input("Utilities: ")
    groceries = get_input("Groceries: ")
    transportation = get_input("Transportation: ")

    print("\n--- Income Breakdown ---")
    print("Rent:", calc_percent(income, rent), "%")
    print("Utilities:", calc_percent(income, utilities), "%")
    print("Groceries:", calc_percent(income, groceries), "%")
    print("Transportation:", calc_percent(income, transportation), "%")

# run the program
main()
