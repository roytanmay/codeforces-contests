#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        if (n == 3)
            cout << "-1" << endl;
        else
        {
            for (long long i = n; i > (n - (n / 2)); i--)
                cout << i << " ";
            for (long long i = 1; i <= (n - (n / 2)); i++)
                cout << i << " ";
            cout << endl;
        }
    }

    return 0;
}