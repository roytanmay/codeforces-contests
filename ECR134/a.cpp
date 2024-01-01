#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vector<char> v(4);
        for(int i=0; i<4; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        if(v[0] == v[1] && v[1] == v[2] && v[2] == v[3])
        {
            cout << "0" << endl;
        }
        else if((v[0] == v[1] && v[1] == v[2]) || (v[1] == v[2] && v[2] == v[3]) || (v[1] == v[0] && v[2] == v[3]))
        {
            cout << "1" << endl;
        }
        else if((v[0] == v[1]) || (v[1] == v[2]) || (v[2] == v[3]))
        {
            cout << "2" << endl;
        }
        else
        {
            cout << "3" << endl;
        }
    }
    return 0;
}