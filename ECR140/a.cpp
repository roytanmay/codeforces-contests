#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t = 1;
    cin >> t;

    while (t--)
    {
        long long arr[3][2], maxi_y = INT_MIN, mini_y = INT_MAX, maxi_yi, mini_yi;
        for (long long i = 0; i < 3; i++)
        {
            cin >> arr[i][0] >> arr[i][1];

            // if(arr[i][1] > maxi_y)
            // {
            //     maxi_y = arr[i][1];
            //     maxi_yi = i;
            // }

            // if(arr[i][1] < mini_y)
            // {
            //     mini_y = arr[i][1];
            //     mini_yi = i;
            // }
        }

        // sort(arr, arr+3);
        // long long mid_x = arr[1][0], mid_y, mid_yi;

        // for(long long i=0; i<3; i++)
        // {
        //     if(i != maxi_yi && i != mini_y)
        //     {
        //         mid_y = arr[i][1];
        //         mid_yi = i;
        //     }
        // }

        if ((arr[1][0] == arr[0][0] || arr[1][0] == arr[2][0] || arr[2][0] == arr[0][0]) && (arr[1][1] == arr[0][1] || arr[1][1] == arr[2][1] || arr[2][1] == arr[0][1]))
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}