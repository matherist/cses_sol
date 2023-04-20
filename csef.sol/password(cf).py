t = int(input())
while t >= 1:
    c = []
    n = int(input())
    d = list(map(int, input().split()))
    s = []
    for i in range(10):
        if not (i in d):
            s.append(i)
    k = len(s)
    factorial1 = 1
    factorial2 = 1
    for i in range(1, k+1):
        factorial1*=i
    for i in range(1, k-1):
        factorial2*=i
    res = factorial1/(factorial2*2)*6
    print(int(res), " ")

    t -=1