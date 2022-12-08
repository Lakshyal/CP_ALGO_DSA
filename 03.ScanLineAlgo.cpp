#include <bits/stdc++.h>
using namespace std;

void ScanLine()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int prefix[n + 1]{0}; // one size bigger than array
    int q;
    cin >> q;
    while (q--)
    {
        int l, r, x;
        cin >> l >> r >> x;
        prefix[l] += x;
        prefix[r + 1] -= x;
    }
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += prefix[i];
        a[i] += s;
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
int main()
{
    ScanLine();
    return (0);
}
