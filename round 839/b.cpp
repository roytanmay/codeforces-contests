#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t = 1;
    cin >> t;

    while (t--)
    {
        ll arr[2][2];
        cin >> arr[0][0] >> arr[0][1];
        cin >> arr[1][0] >> arr[1][1];

        if ((arr[0][0] < arr[0][1] && arr[0][1] < arr[1][1] && arr[1][1] > arr[1][0] && arr[1][0] > arr[0][0]) ||
            (arr[0][1] < arr[1][1] && arr[1][1] < arr[1][0] && arr[1][0] > arr[0][0] && arr[0][0] > arr[0][1]) ||
            (arr[1][1] < arr[1][0] && arr[1][0] < arr[0][0] && arr[0][0] > arr[0][1] && arr[0][1] > arr[1][1]) ||
            (arr[1][0] < arr[0][0] && arr[0][0] < arr[0][1] && arr[0][1] > arr[1][1] && arr[1][1] > arr[1][0]))
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }

    return 0;
}