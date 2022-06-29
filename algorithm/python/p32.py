def a(n):
    s = 0
    for i in range(1, n + 1):
        s = i * i + s
    return s

print(a(10))