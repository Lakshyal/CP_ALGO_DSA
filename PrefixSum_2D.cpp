#include <bits/stdc++.h>
using namespace std;

void prefixSum()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }
    int prefix[n][m]{0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            prefix[i][j] = a[i][j];
            if (i - 1 >= 0)
                prefix[i][j] += prefix[i - 1][j];
            if (j - 1 >= 0)
                prefix[i][j] += prefix[i][j - 1];
            if (i - 1 >= 0 && j - 1 >= 0)
                prefix[i][j] -= prefix[i - 1][j - 1];
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        int i1, i2, j1, j2;
        cin >> i1 >> j1 >> i2 >> j2;
        int sum = prefix[i2][j2];
        if (i1 - 1 >= 0)
            sum -= prefix[i1 - 1][j2];
        if (j1 - 1 >= 0)
            sum -= prefix[i2][j1 - 1];
        if (i1 - 1 >= 0 && j1 - 1 >= 0)
            sum += prefix[i1 - 1][j1 - 1];
        cout << sum << endl;
    }
}
int main()
{
    prefixSum();
    return (0);
}
