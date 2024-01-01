#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        vector<pair<int, int>> queries;
        for (int i = 0; i < q; i++)
        {
            int a, b;
            cin >> a >> b;
            queries.push_back(make_pair(a, b));
        }

        long long sum = 0;
        int odd = 0, even = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2)
                odd++;
            else
                even++;

            sum += arr[i];
        }

        for (int i = 0; i < q; i++)
        {
            if (queries[i].first == 0)
            {
                sum += (even * queries[i].second);
                if (queries[i].second % 2)
                {
                    even = 0;
                    odd = n;
                }

                cout << sum << endl;
            }
            else
            {
                sum += (odd * queries[i].second);
                if (queries[i].second % 2)
                {
                    even = n;
                    odd = 0;
                }

                cout << sum << endl;
            }

            // cout << endl;
        }
    }

    return 0;
}