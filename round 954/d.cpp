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

        int ans = LLONG_MAX;
        bool zero = false;
        stack<int> st;

        for (int j = 0; j < n - 1; j++)
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '0')
                    zero = true;

                if (i == j)
                {
                    int num = (s[i] - '0') * 10 + (s[i + 1] - '0');

                    if (num == 1)
                    {
                        if (st.empty())
                            st.push(1);
                    }
                    else
                    {
                        if (!st.empty() && st.top() == 1)
                        {
                            st.pop();
                            st.push(num);
                        }
                        else
                            st.push(num);
                    }
                    i++;
                }
                else
                {
                    if (s[i] == '1')
                    {
                        if (st.empty())
                            st.push(1);
                    }
                    else
                    {
                        if (!st.empty() && st.top() == 1)
                        {
                            st.pop();
                            st.push(s[i] - '0');
                        }
                        else
                            st.push(s[i] - '0');
                    }
                }
            }

            int temp = 0;
            while (!st.empty())
            {
                // cout << st.top() << " ";
                temp += st.top();
                st.pop();
            }
            // cout << endl;
            ans = min(ans, temp);
        }

        if (n == 2)
            cout << ((s[0] - '0') * 10 + (s[1] - '0')) << endl;
        else if (n == 3 && (s[0] == '0' || s[n - 1] == '0'))
            cout << 0 << endl;
        else if (zero && n > 3)
            cout << 0 << endl;
        else
            cout << ans << endl;
    }
}