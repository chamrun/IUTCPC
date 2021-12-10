#include <iostream>
#include <vector>
#include <map>

void findPath(std::vector<int> &indicesToVisit, std::vector<int> &way)
{
    std::map<int, int> numberToIndex;
    int i = 0;
    for (auto &num : way)
    {
        numberToIndex[num] = i++;
    }
    for (auto &pair : numberToIndex)
    {
        indicesToVisit.push_back(pair.second);
    }
}

int main()
{
    std::vector<int> way;
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int x;
        std::cin >> x;
        way.push_back(x);
    }

    std::vector<int> indicesToVisit;
    findPath(indicesToVisit, way);
    int jumps = 0;
    int erases = 0;
    int curr = 0;
    for (auto &toVisit : indicesToVisit)
    {
        if (curr != toVisit)
        {
            jumps += std::abs(toVisit - curr);
            curr = toVisit;
        }
        ++erases;
    }
    std::cout << jumps + erases;
}