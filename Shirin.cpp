#include <iostream>

using namespace std;


struct Node
{
    int index;
    struct Node* next;
};

struct Node* newNode(int index)
{
    struct Node* newNode = new Node;
    newNode->index = index;
    newNode->next = NULL;
    return (newNode);
}

int
main()
{
    int n;
    cin >> n;


    struct Node *men = newNode(1);
    Node *first = men;

    for (int i = 2; i <= n; i++)
    {
        men->next = newNode(i);
        men = men->next;
    }

    men->next = first;
    int i = 4;
    int j = 1;

    while (men->next->index != 5)
    {
        men = men->next;
    }

    men->next = men->next->next;
    men = men->next;

    n -= 1;

    while (1 < n)
    {
        j += 1;

        if (j % 5 == 0)
        {
            men->next = men->next->next;
            j = 1;
            n -= 1;
        }
        men = men->next;
    }

    cout << men->index;

    return 0;
}