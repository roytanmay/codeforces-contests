#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

signed main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        set<string> st;
        for (int i = 0; i < n - 1; i++)
        {
            string temp = "";
            temp += s[i];
            temp += s[i + 1];
            st.insert(temp);
        }
        cout << st.size() << endl;
        cout << endl;
    }
}