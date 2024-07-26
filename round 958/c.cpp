#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

vector<int> decToBin(int n)
{
    vector<int> res(64, 0);
    int i = 0;
    while (n)
    {
        if (n % 2 == 1)
            res[i] = 1;
        else
            res[i] = 0;
        n /= 2;
        i++;
    }
    return res;
}

int binToDec(vector<int> &v)
{
    int res = 0;
    for (int i = 0; i < (int)v.size(); i++)
    {
        if (v[i] == 1)
            res = (res | (1LL << i));
    }
    return res;
}

signed main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (n <= 2)
        {
            cout << "1" << endl;
            cout << n << endl;
        }
        else
        {
            vector<int> bits = decToBin(n);

            // for (auto i : bits)
            //     cout << i << " ";

            vector<int> res;
            vector<int> v = bits, v2 = bits;
            stack<int> st;
            int i;
            for (i = 63; i >= 0; i--)
            {
                if (bits[i] == 1)
                {
                    v2[i] = 0;

                    for (int j = 0; j < i; j++)
                    {
                        if (bits[j] == 1)
                            st.push(j);
                    }

                    int num = binToDec(v2);
                    if (num > 0)
                        res.push_back(num);

                    i--;
                    break;
                }
            }

            while (!st.empty())
            {
                v[st.top()] = 0;
                int num = binToDec(v);
                res.push_back(num);
                v[st.top()] = 1;
                st.pop();
            }

            if (((int)res.size() > 0 && res.back() < n) || (int)res.size() == 0)
            {
                res.push_back(n);
            }

            cout << (int)res.size() << endl;
            for (auto i : res)
                cout << i << " ";
            cout << endl;
        }
        // cout << endl;
    }
}