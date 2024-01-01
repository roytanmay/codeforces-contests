#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int arr[n+1];

        for(int i=n; i>0; i = i-2)
        {
            arr[i] = i - 1;
            arr[i-1] = i;
            if(i==1)
            {
                arr[i] = i;
            }
        }

        for(int i=1; i<=n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}