class Node:
    def __init__(self, index):
        self.index = index
        self.next = None


def main():
    n = int(input())
    # n = 8

    men = Node(1)
    first = men

    for i in range(2, n + 1):
        men.next = Node(i)
        men = men.next

    men.next = first
    i = 4
    j = 1
    # print(men)
    # print(men.data)
    # print(men.index)

    while men.next.index != 5:
        men = men.next

    # print(men.next.index)
    men.next = men.next.next
    men = men.next

    n -= 1

    # print('s')
    while 1 < n:
        # print(men.index, end=' ')
        j += 1

        if j % 5 == 0:
            # print('\nDead: ', end='')
            # print(men.next.index)
            # print()
            men.next = men.next.next
            j = 1
            n -= 1

        men = men.next

    # print('ans: ')
    print(men.index)


if __name__ == '__main__':
    main()
