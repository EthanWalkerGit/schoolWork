from stack import ArrayStack
"""push, pop, top, is_empty"""

S = ArrayStack()
case = input("Enter test case: \n")
half = 0

for i in case:
    if i == '0':
        S.push('0')
    if i == '1' and S.is_empty():
        print("The input is not balanced.")
        half = 2
        break
    if i == '1':
        half = 1
        S.pop()
    if half == 1 and i == '0':
        print("The input is not balanced.")
        half = 2
        break


if not S.is_empty() and not half == 2:
    print("The input is not balanced.")

if S.is_empty() and half == 1:
    print("The input is balanced")
