# ========================
#       Information
# ========================

# Direct Link: https://www.hackerrank.com/challenges/30-binary-numbers/problem
# Difficulty: Easy
# Max Score: 30
# Language: Python

Explanation

Sample Case 1:
The binary representation of 510 is 1012, so the maximum number of consecutive 1‘s is 1.

Sample Case 2:
The binary representation of 1310 is 11012, so the maximum number of consecutive 1‘s is 2.

# ========================
#         Solution
# ========================

N = int(input())
DATA = bin(N)

MAXIMUM = 0
CURRENT = 0

for num in DATA:
    if num == '1':
        CURRENT = CURRENT + 1
    else:
        MAXIMUM = max(MAXIMUM, CURRENT)
        CURRENT = 0

print(max(MAXIMUM, CURRENT))
