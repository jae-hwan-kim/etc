def ins_sort(n):
    length = len(n)
    for i in range (1, length):
        min_num = n[i]
        j = i - 1
        while j >= 0 and n[j] > min_num:
                n[j + 1] = n[j]
                j -= 1
        n[j + 1] = min_num
    return (n)

list = [-13, 21, 125, 1, 2, 9, 32, 5]
ins_sort(list)
print(list)


# def ins_sort(list):
#     length = len(list)
#     for i in range(1, length):
#         key = list[i]
#         j = i - 1
#         while 0 <= j and list[j] > key:
#             list[j + 1] = list[j]
#             j -= 1
#         list[j + 1] = key
#     return (list)ls