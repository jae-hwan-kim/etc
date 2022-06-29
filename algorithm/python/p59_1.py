def sum_n(number):
    if (1 >= number):
        return (1)
    return (number + (sum_n(number - 1)))


# def sum_n(number):
#     if (1 > number):
#         return (0)
#     number = number + (sum_n(number - 1)) 
#     return (number)

print(sum_n(6))
