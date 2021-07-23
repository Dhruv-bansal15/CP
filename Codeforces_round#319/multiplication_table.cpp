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
int printDivisors(int n, int limit_)
{
    int count = 0;
    // Note that this loop runs till square root
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            // If divisors are equal, print only one
            if (n / i == i)
                
                {
                    if (i <= limit_ & i >= 1) count++;
                }

            else
                {
                    if (i >= 1 & n / i >= 1 & i <= limit_ & n / i <= limit_)
                    {
                        count += 2;
                    }
                }
        }
    }
    return count;
}

int32_t main()
{
    int limit_, num;
    cin >> limit_ >> num;
    cout << printDivisors(num, limit_);

    return 0;
}