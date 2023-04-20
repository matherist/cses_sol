s = list(input().split())
d = []
for i in range(len(s)):
    d += s[i].lower()
f = set(d)
a = list(f)
new_dict = {}
for k in range(len(a)):
    y = k +1
    new_dict.update({a[k].upper() : a[k]})
new_dict = sorted(new_dict.items(), key=lambda x: x[1])
print(new_dict)