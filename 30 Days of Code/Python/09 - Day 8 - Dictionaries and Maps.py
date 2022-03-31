# ========================
#       Information
# ========================

# Direct Link: https://www.hackerrank.com/challenges/30-dictionaries-and-maps/problem
# Difficulty: Easy
# Max Score: 30
# Language: Python

Explanation

We add the following n = 3 (Key,Value) pairs to our map so it looks like this:

phoneBook = {(sam, 99912222), (tom, 11122222), (harry, 12299933)}

We then process each query and print key=value if the queried key is found in the map; otherwise, we print Not found.

Query 0: sam
Sam is one of the keys in our dictionary, so we print sam=99912222.

Query 1: edward
Edward is not one of the keys in our dictionary, so we print Not found.

Query 2: harry
Harry is one of the keys in our dictionary, so we print harry=12299933.

# ========================
#         Solution
# ========================

n = int(input())
d = {}

for i in range(n):
    x = input().split()
    d[x[0]] = x[1]

while True:
    try:
        NAME = input()
        if NAME in d:
            print(NAME, "=", d[NAME], sep="")
        else: print("Not found")
    except:
        break
