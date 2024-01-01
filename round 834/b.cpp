#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int m, s;
        cin >> m >> s;

        int arr[m], sum = 0;
        for (int i = 0; i < m; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        int maxEle = *max_element(arr, arr + m);

        int tempSum = (maxEle * (maxEle + 1)) / 2;

        int s1 = tempSum - sum;

        if (s - s1 < 0)
            cout << "NO" << endl;
        else
        {
            int temp = s - s1;
            sum = 0;
            maxEle++;
            while (sum < temp)
            {
                sum += maxEle;
                maxEle++;
            }

            if (sum == temp)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}