# AH, Class 6, Expressions practic-Python
# 1. Equation: 7 - 24 ÷ 8 × 4 + 6
a = 7
b = 24
c = 8
d = 4
e = 6
result1 = a - b / c * d + e
print("Equation 1 =", result1)   # should be 1

# 2. Equation: 18 ÷ 3 - 7 + 2 × 5
a = 18
b = 3
c = 7
d = 2
e = 5
result2 = a / b - c + d * e
print("Equation 2 =", result2)   # should be 9

# 3. Equation: 6 × 4 ÷ 12 + 72 ÷ 8 - 9
a = 6
b = 4
c = 12
d = 72
e = 8
f = 9
result3 = a * b / c + d / e - f
print("Equation 3 =", result3)   # should be 2

# 4. Equation: (17 - 6 ÷ 2) + 4 × 3
a = 17
b = 6
c = 2
d = 4
e = 3
result4 = (a - b / c) + d * e
print("Equation 4 =", result4)   # should be 26

# 5. Equation: -2(1 × 4 - 2 ÷ 2) + (6 + 2 - 3)
a = 1
b = 4
c = 2
d = 6
e = 3
result5 = -2 * (a * b - c / c) + (d + c - e)
print("Equation 5 =", result5)   # should be -1

# 6. Equation: -1 × [(3 - 4 × 7) ÷ 5] - 2 × 24 ÷ 6
a = 3
b = 4
c = 7
d = 5
e = 2
f = 24
g = 6
result6 = -1 * ((a - b * c) / d) - e * f / g
print("Equation 6 =", result6)   # should be -3

# 7. Equation: (3 × 5² ÷ 15) - (5 - 2²)
a = 3
b = 5
c = 15
d = 2
result7 = (a * b**2 / c) - (b - d**2)
print("Equation 7 =", result7)   # should be 4

# 8. Equation: (1⁴ × 2² + 3³) - 2⁵ ÷ 4
a = 1
b = 4
c = 2
d = 3
e = 2
f = 5
g = 4
result8 = (a**b * c**2 + d**3) - e**f / g
print("Equation 8 =", result8)   # should be 23

# 9. Equation: (22 ÷ 2 - 2 × 5)² + (4 - 6 ÷ 6)²
a = 22
b = 2
c = 5
d = 4
e = 6
result9 = (a / b - c * 2)**2 + (d - e / e)**2
print("Equation 9 =", result9)   # should be 10
