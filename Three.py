a = input()
b = input()

for i in range(len(a)):
    al = ord(a[i]) - 97
    bl = ord(b[i]) - 97
    cl = (al + bl) % 26
    print(chr(cl + 97), end='')
