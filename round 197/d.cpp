#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

class SegmentTree
{
public:
    vector<int> segTree;

    SegmentTree(int n)
    {
        segTree.resize(4 * n + 1);
    }

    int buildTree(int index, int low, int high, vector<int> &arr)
    {
        if (low == high)
        {
            segTree[index] = arr[low];
            return 1;
        }

        int mid = low + (high - low) / 2;
        int op = buildTree(2 * index + 1, low, mid, arr);
        buildTree(2 * index + 2, mid + 1, high, arr);

        if (op % 2)
            segTree[index] = segTree[2 * index + 1] | segTree[2 * index + 2];
        else
            segTree[index] = segTree[2 * index + 1] ^ segTree[2 * index + 2];

        return op + 1;
    }

    int update(int index, int low, int high, int i, int val)
    {
        if (low == high)
        {
            segTree[index] = val;
            return 1;
        }

        int mid = low + (high - low) / 2;
        int op;
        if (i <= mid)
            op = update(2 * index + 1, low, mid, i, val);
        else
            op = update(2 * index + 2, mid + 1, high, i, val);

        if (op % 2)
            segTree[index] = segTree[2 * index + 1] | segTree[2 * index + 2];
        else
            segTree[index] = segTree[2 * index + 1] ^ segTree[2 * index + 2];

        return op + 1;
    }
};

signed main()
{
    int t = 1;
    // cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        n = pow(2, n);
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        SegmentTree segTree(n);
        segTree.buildTree(0, 0, n - 1, arr);
        while (m--)
        {
            int p, b;
            cin >> p >> b;
            p--;
            segTree.update(0, 0, n - 1, p, b);
            cout << segTree.segTree[0] << endl;
        }
        cout << endl;
    }
}