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

    // map<string, string> mp;
    // mp["is"] = "NO";
    // mp["it"] = "YES";
    // mp["stated"] = "NO";
    // mp["submit"] = "YES";
    // mp["wa"] = "NO";
    // mp["wronganswer"] = "NO";
    // mp["ac"] = "NO";
    // mp["accepted"] = "NO";
    // mp["tle"] = "NO";
    // mp["timelimitexceeded"] = "YES";

    while (t--)
    {
        string str;
        cin >> str;
        // int sum = 0;
        // for (auto i : str)
        //     sum += (i - 'a');
        if (str.find("it") != string::npos)
            pyes;
        else
            pno;
    }
}