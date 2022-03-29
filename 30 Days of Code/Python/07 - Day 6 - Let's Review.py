# ========================
#       Information
# ========================

# Direct Link: https://www.hackerrank.com/challenges/30-review-loop/problem
# Difficulty: Easy
# Max Score: 30
# Language: Python


# Explanation

Test Case 0: S = “Hacker”
S[0] = “H”
S[1] = “a”
S[2] = “c”
S[3] = “k”
S[4] = “e”
S[5] = “r”
The even indices are 0, 2, and 4, and the odd indices are 1, 3, and 5. We then print a single line of 2 space-separated strings;
the first string contains the ordered characters from S‘s even indices (Hce), and the second string contains the ordered characters from S‘s odd indices (akr).

Test Case 1: S = “Rank”
S[0] = “R”
S[1] = “a”
S[2] = “n”
S[3] = “k”
The even indices are 0, 2 and 4, and the odd indices are 1, 3 and 5. We then print a single line of 2 space-separated strings; the first string contains the ordered characters from S‘s even indices (Rn),
and the second string contains the ordered characters from S‘s odd indices (ak).


# ========================
#         Solution
# ========================

N = int(input())

for _ in range(N):
    listChars = [char for char in input()]
    word_1 = ""
    word_2 = ""
    check = True

    for i in range(len(listChars)):
        if check:
            word_1 += listChars[i]
        else:
            word_2 += listChars[i]
        check = not check

    print(word_1, word_2)
