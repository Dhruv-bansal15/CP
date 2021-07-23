#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#include <functional>
#include <numeric>
using namespace std;
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define pb push_back
#define ff first
#define tester \
    int t;     \
    cin >> t;  \
    while (t--)
#define looper(a, b, c) for (int a = b; a < c; a++)
#define ss second
#define pqb priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define mod 1000000007
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
 
// Returns LCM of array elements
int findlcm(int arr[], int n)
{
    // Initialize result
    int ans = arr[0];
 
    // ans contains LCM of arr[0], ..arr[i]
    // after i'th iteration,
    for (int i = 1; i < n; i++)
        ans = (((arr[i] * ans)) /
                (gcd(arr[i], ans)));
 
    return ans;
}
int32_t main()
{
    int n;
    cin >> n;
    if (n == 1)
        cout << 1;
    else if (n == 2)
        cout << 2;
    else if (n == 3)
        cout << 6;
    else
    {
        if (n % 2 != 0)
        {
            int x = n * (n - 1) * (n - 2);
            cout << x;
        }
        else
        {
            int curr = (n - 1) * (n - 2) * (n - 3);
            int dep = n - 50;
            if(n-50<0) dep = 1;
            looper(i, dep, n+1)
            {
                looper(j, dep, n+1)
                {
                    looper(k, dep, n+1)
                    {
                        int arr[] = { i,j,k };
                        int n_ = sizeof(arr) / sizeof(arr[0]);
    
                        int result = findlcm(arr,n_);
                        if(result>curr) curr=result;
                    }
                }
            }
            cout<<curr;
        }
    }

    return 0;
}