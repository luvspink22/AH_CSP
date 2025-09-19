#AH 6th period Old Enough-Python

# ask how old they are
age = int(input("How old are you? "))

# check if they can vote
if age >= 18:
    print("You are old enough to vote!")
# check if they can drive
elif age >= 16:
    print("You are old enough to drive!")
# check if they can get a learner's permit
elif age >= 15:
    print("You are old enough to get a learners permit!")
# check if they can go to school
elif age >= 5:
    print("You are old enough to go to school!")
# check if they are too young
else:
    print("You’re too young for these, sorry.")
