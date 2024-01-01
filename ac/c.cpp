#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n;

    vector<vector<int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        v[i] = {a, b};
    }

    return 0;
}