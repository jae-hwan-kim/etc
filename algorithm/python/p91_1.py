def sort(list):
    length = len(list)
    for i in range(0, length - 1):
        min_idx = i
        for j in range(i + 1, length):
            if list[j] > list[min_idx]:
                min_idx = j
                list[i], list[min_idx] = list[min_idx], list[i]
                # list[min_idx] = list[i]
    # return list

# def find_min(list):
#     length = len(list)
#     min_idx = 0
#     for i in range(1, length):
#         if list[i] < list[min_idx]:
#             min_idx = i
#     return min_idx
        

# def sort(list):
#     result = []
#     while [] != list:
#         min_idx = find_min(list)
#         result.append(list[min_idx])
#         list.pop(min_idx)
#     return result

a = [2, 4, 5, 1, 3, 234, 123, 6662]
sort(a)
print(a)