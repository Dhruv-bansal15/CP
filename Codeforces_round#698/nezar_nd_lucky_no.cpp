#include <bits/stdc++.h>
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
bool checker(int a, int d)
{
    while (a != 0)
    {
        int temp = a % 10;
        a /= 10;
        if (temp == d)
        {
            return true;
        }
    }
    return false;
}
int32_t main()
{
    tester
    {
        int n, d;
        cin >> n >> d;
        vector<int> IfPossible_(11 * d, 0);
        IfPossible_[0] = 1;
        looper(i, 1, 11 * d)
        {
            bool done = false;
            looper(j, 0, i)
            {
                if (IfPossible_[j] == 1)
                {
                    if (checker(i - j, d))
                    {
                        done = true;
                    }
                }
            }
            if (done == true)
            {
                IfPossible_[i] = 1;
            }
        }
        int temp = 11 * d;
        looper(i, 0, n)
        {
            int x;
            cin >> x;
            if (x >= temp)
            {
                cout << "YES"
                     << "\n";
            }
            else if (IfPossible_[x] == 1)
            {
                cout << "YES"
                     << "\n";
            }
            else
            {
                cout << "NO"
                     << "\n";
            }
        }
    }
    return 0;
}