#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr+k);
        sort(arr+k, arr+n);

        // for(int i=0; i<n; i++)
        // {
        //     cout << arr[i] << " ";
        // }
        // cout << endl;

        int j = k-1, count = 0;

        for(int i=k; i<n; i++)
        {
            if(j>=0 && arr[i] < arr[j])
            {
                swap(arr[i], arr[j]);
                j--;
                count++;
            }
            else
            {
                break;
            }
        }

        cout << count << endl;
    }

    return 0;
}