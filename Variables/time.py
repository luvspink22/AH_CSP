# AH period 6 Time of Day - Python

import time

raw = input("Hour in military time (0-23). Enter to use current time: ").strip()
hour = time.localtime().tm_hour if raw == "" else int(raw)

if hour < 0 or hour > 23:
    print("Enter a number from 0 to 23.")
else:
    # least likely → most likely
    if hour >= 18 or hour <= 4:
        print("Good Evening!")
    elif 5 <= hour <= 11:
        print("Good Morning!")
    else:  # 12–17
        print("Good Afternoon!")
