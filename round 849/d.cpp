#include <bits/stdc++.h>
using namespace std;

#define ll long long
int mod = 1000000007;

int main()
{
    ll t = 1;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        string str;
        cin >> str;
        vector<int> freq(26, 0);
        for (auto i : str)
            freq[i - 'a']++;
        set<char> st;
        ll ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            st.insert(str[i]);
            freq[str[i] - 'a']--;
            ll c = 0, s = st.size();
            for (int i = 0; i < 26; i++)
            {
                if (freq[i] > 0)
                    c++;
            }
            ans = max(ans, s + c);
        }
        cout << ans << endl;
        // cout << endl;
    }

    return 0;
}