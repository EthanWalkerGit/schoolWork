from stack import ArrayStack
"""push, pop, top, is_empty"""

S = ArrayStack()
case = input("Enter test case: \n")

for i in case:
    if i == '(' or i == '[' or i == '{':
        S.push(i)
    if i == ')':
        if S.top() == '(':
            S.pop()
        else:
            print("The input is not balanced.")
            break
    if i == ']':
        if S.top() == '[':
            S.pop()
        else:
            print("The input is not balanced.")
            break
    if i == '}':
        if S.top() == '{':
            S.pop()
        else:
            print("The input is not balanced.")
            break

if S.is_empty():
    print("The input is balanced")

if not S.is_empty():
    print("The input is not balanced")



