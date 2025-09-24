# AH period 6 FuzzBazz - Python

for i in range(1, 51):
    # Is it divisible by 3 and 5
    if i % 3 == 0 and i % 5 == 0:
        print("FizzBuzz")
    
    # Is it divisible by 3
    elif i % 3 == 0:
        print("Fizz")
    
    # Is it divisible by 5
    elif i % 5 == 0:
        print("Buzz")
    
    # If not divisible by 3 or 5
    else:
        print(i)
