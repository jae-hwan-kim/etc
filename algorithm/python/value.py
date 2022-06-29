import math

def one_to_ten(a):
    s = 0
    for i in range(a + 1):
        s = s + i
    return s

def sum(b):
    s = 0
    for i in range(11):
        s = s + b
        b += 1
    return s


print(one_to_ten(10))
print(sum(0))