# def find_max(list):
#     length = len(list)
#     max_value = list[0]
#     for i in range(1, length):
#         if (max_value < list[i]):
#             max_value = list[i]
#     return (max_value)


# list = [1, 2, 10, 1315, -23, 3421, 0, 33]
# print(find_max(list))

# 재귀 함수로...!

def find_max(list, length):
    if (1 == length):
        return (list[0])
    max_value = find_max(list, length - 1)
    if (max_value < list[length - 1]):
        return (list[length - 1])
    else:
        return (max_value)

list = [1, 2, 10, 425, 12, -315]
print(find_max(list, len(list)))