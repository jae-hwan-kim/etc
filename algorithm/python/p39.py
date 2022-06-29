def find_min_num(arr):
    n = len(arr)
    min_num = arr[0]
    for i in range(1, n - 1):
        if arr[i] < min_num:
            min_num = arr[i]
    return (min_num)

arr = [3, 5, 9 ,111, 1, -124, 10389, -115, 2]
print(find_min_num(arr))