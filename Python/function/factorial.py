def factorial(n):
    i = n
    fact = 1
    while(i>=1):
        fact *= i
        i -= 1
    return(fact)

n = int(input("Enter a number: "))
f = factorial(n)
print(f"The factorial of {n} is {f}.")