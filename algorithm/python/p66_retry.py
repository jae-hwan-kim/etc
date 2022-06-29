def fibonacci(index):
    if 1 >= index:
        return (index)
    return (fibonacci(index - 1) + fibonacci(index - 2))

print(fibonacci(7))
print(fibonacci(10))