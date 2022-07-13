def solution(id_list, report, k):
    answer = [0] * len(id_list)
    reports = {x : 0 for x in id_list}

    for r in set(report):
        reports[r.split(' ')[1]] += 1

    for r in set(report):
        if reports[r.split(' ')[1]] >= k:
            answer[id_list.index(r.split(' ')[0])] += 1
    return answer

id_list = ["muzi", "frodo", "apeach", "neo"]
report = ["muzi frodo","apeach frodo","frodo neo","muzi neo","apeach muzi"]
k = 2

print(solution(id_list, report, k))

# 
# check{} -> frodo : 2, neo : 2, muzi : 1
# a() ->
# b() ->
# id_ -> frodo, neo, muzi
# n   -> 2, 2, 1
# lst{} -> muzi : frodo neo, apeact : frodo muzi, frodo : neo 
# user -> muzi, apeach, frodo
# user2 -> frodo neo, frodo muzi, neo
#