def print_list(list):
    length = len(list)
    for i in range(0, length - 1):
        for j in range(i + 1, length):
            print(list[i], "+" ,list[j])

list = ["Tom", "Jerry", "Mike"]
print_list(list)