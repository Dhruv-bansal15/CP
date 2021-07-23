#include<bits/stdc++.h>
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
#define pii pair<int,int>
#define pb push_back
#define ff first
#define tester int t;cin>>t;while(t--)
#define looper(a,b,c) for(int a=b;a<c;a++)
#define ss second
#define pqb priority_queue<int>
#define pqs priority_queue<int,vi,greater<int> >
#define mod 1000000007
int fact(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}   
int nCr(int n, int r)
{
    if(r==0){
        return 1;
    }
    int ans = n*nCr(n-1,r-1)/r;
    return ans;
}

// Returns factorial of n
int32_t main(){
    int n,m,t;cin>>n>>m>>t; // 4 3 5
    int boys=4,girls=1;
    int ways=0;
    while(boys<=n){
        girls = t - boys;
        if(girls>m | girls<1){
            boys++;
            continue;
        }
        ways+= nCr(n,boys)*nCr(m,girls);
        boys++;
        
    }
    cout<<ways;
    // cout<<nCr(5,4);
    return 0;
}