def quick_sort_sub(a, start, end):
    if end - start <= 0:
        return
    pivot = a[end]
    i = start
    for j in range(start, end):
        if a[j] <= pivot:
            a[i], a[j] = a[j], a[i]
            i += 1
    a[i], a[end] = a[end], a[i]
    quick_sort_sub(a, start, i - 1)
    quick_sort_sub(a, i + 1, end)

def quick_sort(a):
    quick_sort_sub(a, 0, len(a) - 1)

list = [-13, 21, 125, 1, 2, 9, 32, 5]
quick_sort(list)
print(list)

# def quick_sort_sub(a, start, end):
#     if end - start <= 0:
#         return
#     pivot = a[end]
#     i = start
#     for j in range(start, end):
#         # 기준보다 작으면 맨앞에부터(i) 채운다(i+1)
#         if a[j] <= pivot:
#             a[i], a[j] = a[j], a[i]
#             i += 1
#     # 기준보다 작은 곳을 옮길 때 사용했던 인덱스(i)와 end를 바꾼다. 현재 i는 원래 다음에 있을 기준보다 작은 값을 넣을 공간이었지만, for문을 다 돌았기 때문에 기준보다 큰값이 있음. 그래서 기준과 바꿔줌.
#     a[i], a[end] = a[end], a[i]
#     quick_sort_sub(a, start, i - 1)
#     quick_sort_sub(a, i + 1, end)
    
# def quick_sort(a):
#     quick_sort_sub(a, 0, len(a) - 1)