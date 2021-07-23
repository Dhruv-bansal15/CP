#include <bits/stdc++.h>
using namespace std;
#define int_ long long int
#define vi vector<int>
#define pii pair<int, int>
#define pb push_back
#define ff first
#define ss second
#define pqb priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define mod 1000000007
int main()
{
    int_ t;
    cin >> t;
    while (t--)
    {
        int_ a, b, c, d, k;
        cin >> a >> b >> c >> d >> k;
        int_ req_min_steps = abs(a - c) + abs(b - d);
        if (req_min_steps == k)
        {
            cout << "YES" << endl;
        }
        else if ((k - req_min_steps) > 0 & (k - req_min_steps) % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
