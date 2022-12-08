#include <bits/stdc++.h>
using namespace std;

void prefixSum()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int prefix[n]{0};
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            prefix[i] = a[i];
        else
            prefix[i] = a[i] + prefix[i - 1];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int sum = prefix[r];
        if (l - 1 >= 0)
            sum -= prefix[l - 1];
        cout << sum;
    }
}
int main()
{
    prefixSum();
    return (0);
}
