# ========================
#       Information
# ========================

# Direct Link: https://www.hackerrank.com/challenges/30-dictionaries-and-maps/problem
# Difficulty: Easy
# Max Score: 30
# Language: Python

Explanation

Consider the following steps. After the recursive calls from step 1 to 3, results are accumulated from step 3 to 1.


factorial(3) = 3 x factorial(2) = 3 x 2 = 6
factorial(2) = 2 x factorial(2) = 2 x 1 = 2
factorial(1) = 1

# ========================
#         Solution
# ========================

import os

# Complete the factorial function below.
def factorial(N):
    '''Function to calculate the factorial'''
    if N <= 1:
        return 1
    else:
        return N * factorial(N-1)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    N = int(input())

    RESULT = factorial(N)

    fptr.write(str(RESULT) + '\n')

    fptr.close()
