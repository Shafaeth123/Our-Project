first = input("Enter your first number: ")
operator = input("Enter operator(+,_,*,/,%): ")
second = input("Enter your second  number: ")

first= int(first)
second= int(second)
if operator == '+':
    print(first + second)
elif operator == '-':
    print(first - second)
elif operator == '*':
    print(first * second)
elif operator == '/':
    print(first / second)
elif operator == '%':
    print(first % second)

else:
    print("Invalid operator!")