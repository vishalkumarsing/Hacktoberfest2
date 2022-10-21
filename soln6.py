n = int(input())
A = list(map(int,input().split()))
def bottle(x):
    l2 = []
    l3 = []
    from copy import deepcopy
    B = deepcopy(x)
    for i in range(len(x)):
        for j in range(1,len(x)):
            if x[i] < x[j] and x[j] not in l2 and x[i] not in l3:
                l3.append(x[i])
                l2.append(x[j])
                B.remove(x[i])
                break
            elif x.count(x[i]) > 1 and (x[i] in l3 or x[i] in l2):
                if x[i] in l3:
                    l3.remove(x[i])
                elif x[i] in l2:
                    l2.remove(x[i])

    return B,l2,l3
out,b,c = bottle(A)
if out[-1] != max(A) and out[-1] not in b and max(A) not in c:
    out.pop()
print(len(out))
