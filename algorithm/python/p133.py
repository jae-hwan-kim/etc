def find_same(s):
    i = 0
    j = len(s) - 1
    while i < j:
        if s[i].isalpha() == False:
            i += 1
        elif s[j].isalpha() == False:
            j -= 1
        elif s[i].lower() != s[j].lower():
            return False
        else:
            i += 1
            j -= 1
    return True

print(find_same("WoW"))
print(find_same("Madam, I'm Adam."))

# def find_same(s):
#     qu = []
#     st = []
    
#     for x in s:
#         if x.isalpha():
#             qu.append(x.lower())
#             st.append(x.lower())
#     while qu:
#         if qu.pop(0) != st.pop():
#             return False
#     return True

# def find_same(s):
#     x = []
#     for i in s:
#         if i.isalpha():
#             x.append(i.lower())
#     while len(x) > 1:
#         if x.pop(0) != x.pop():
#             return False
#     return True