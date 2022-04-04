# ========================
#       Information
# ========================

# Direct Link: https://www.hackerrank.com/challenges/30-interfaces/problem
# Difficulty: Easy
# Max Score: 30
# Language: Python

'''
Explanation

The integer 6 is evenly divisible by 1, 2, 3, and 6. Our divisorSum method should return the sum of these numbers,
which is 1 + 2 + 3 + 6 = 12. The Solution class then prints I implemented:
AdvancedArithmetic on the first line, followed by the sum returned by divisorSum (which is 12) on the second line.

''' 

# ========================
#         Solution
# ========================

class AdvancedArithmetic(object):
    def divisorSum(n):
        raise NotImplementedError

class Calculator(AdvancedArithmetic):
    def divisorSum(self, n):
        pass
    
class AdvancedArithmetic(object):
    def divisorSum(n):
        raise NotImplementedError

class Calculator(AdvancedArithmetic):
    def divisorSum(self, n):
        sum = 0

        for i in range(1, n//2 + 1):
            if n % i == 0:
                sum += i
        return sum + n

n = int(input())
my_calculator = Calculator()
s = my_calculator.divisorSum(n)
print("I implemented: " + type(my_calculator).__bases__[0].__name__)
print(s)
