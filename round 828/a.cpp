#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        string s;

        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cin >> s;

        unordered_map<int, char> mp;

        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (mp[arr[i]] && mp[arr[i]] != s[i])
            {
                flag = false;
                break;
            }
            mp[arr[i]] = s[i];
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}