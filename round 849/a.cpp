#include <bits/stdc++.h>
using namespace std;

#define ll long long
int mod = 1000000007;

string str = "codeforces";
unordered_map<char, int> mp;

int main()
{
    ll t = 1;
    cin >> t;

    for (auto i : str)
    {
        mp[i]++;
    }

    while (t--)
    {
        char ch;
        cin >> ch;

        if (mp[ch])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}