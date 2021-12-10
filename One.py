def main():
    st = input().split()
    n = int(st[0])
    k = int(st[1])
    numb = input()

    if k == 0:
        print(numb)
        exit(0)

    if len(numb) == 1:
        print(0)
        exit(0)

    numb = list(numb)

    if numb[0] != '1':
        k -= 1
        numb[0] = '1'

    i = 1

    while k != 0 and i < len(numb):
        if numb[i] != '0':
            k -= 1
            numb[i] = '0'

        i += 1

    res = ''

    for c in numb:
        res += c

    print(res)


if __name__ == '__main__':
    main()
