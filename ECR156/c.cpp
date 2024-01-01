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
        string str;
        cin >> str;
        int pos;
        cin >> pos;
        int n = str.size();
        if (pos <= n)
            cout << str[pos - 1];
        else
        {
            stack<char> st;
            int curr = n, temp = n;
            char ans = '@';
            for (int i = 0; i < n; i++)
            {
                while (st.size() && st.top() > str[i])
                {
                    st.pop();
                    pos -= temp;
                    temp--;
                    if (st.size() + n - i >= pos)
                    {
                        if (pos > st.size())
                        {
                            pos -= st.size();
                            ans = str[i + pos - 1];
                            break;
                        }
                        int c = st.size() - pos;
                        while (c--)
                            st.pop();
                        ans = st.top();
                        break;
                    }
                }
                if (ans != '@')
                    break;
                st.push(str[i]);
            }
            if (ans == '@')
            {
                while (st.size())
                {
                    ans = st.top();
                    st.pop();
                    pos -= temp;
                    temp--;
                    if (st.size() && st.size() >= pos)
                    {
                        int c = st.size() - pos;
                        while (c--)
                            st.pop();
                        ans = st.top();
                        break;
                    }
                }
            }
            cout << ans;
        }
        // cout << endl;
    }
}