#include <stdio.h>
#include <string.h>

int main()
{
    int n, m, a, b, c, d;
    scanf("%d %d", &n, &m);
    int l[n][m];

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            scanf("%d", &l[i][j]);
        }
    }
    long long int t;
    scanf("%lld", &t);

    for (long long int i = 0; i < t; ++i)
    {
        long long int s = 0;
        scanf("%d %d %d %d", &a, &b, &c, &d);

        for (int j = a; j <= b; ++j)
        {
            for (int k = c; k <= d; ++k)
            {
                s += l[j][k];
            }
        }
        printf("%lld\n", s);
    }

    return 0;
}