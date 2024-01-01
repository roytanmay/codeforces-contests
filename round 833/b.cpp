#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string str;
        cin >> str;

        int ans = 0, distinct = 0, freq[10] = {0}, maxFreq = 0;

        for (int i = 0; i < n; i++)
        {
            for (int k = 0; k < 10; k++)
                freq[k] = 0;

            distinct = 0;
            maxFreq = 0;

            for (int j = i; j < n && j < i + 100; j++)
            {
                freq[str[j] - '0']++;

                if (freq[str[j] - '0'] == 1)
                    distinct++;

                maxFreq = max(maxFreq, freq[str[j] - '0']);

                if (maxFreq <= distinct)
                    ans++;
            }
        }

        cout << ans << endl;
    }
    return 0;
}