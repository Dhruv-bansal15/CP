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
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define pb push_back
#define ff first
#define tester int t;cin>>t;while(t--)
#define looper(a,b,c) for(int a=b;a<c;a++)
#define ss second
#define pqmax priority_queue<int>
#define pqmin priority_queue<int,vi,greater<int> >
#define mod 1000000007
#define vs vector<string>
#define mp map<int,int>
#define ump unordered_map<int,int>
#define space ' '
#define looprev(i,a,b) for(int i=a;i>=(b);i--)
#define logarr(arr,a,b) for(int z=(a);z<=(b);z++) std::cout<<(arr[z])<<space;std::cout<<std::endl;
#define si set<int>
int gCd(int a,int b){
    if(b==0)
        return a;
    return gCd(b,a%b);
}
int fact(int n){
    int res=1;
    for(int i=2;i<=n;i++)
        res = (res*i)%mod;
    return res;
}
int nCr(int n,int r){
    return fact(n)/ (fact(r)*fact(n-r));
}
    
void solve(int n, int k, vi arr)
{
    int cummulative_arr[n+1]={0};
    int sum_ = 0;
    looper(i,0,n)
    {
        sum_+=arr[i];
        cummulative_arr[i+1] = sum_;
 
    }
    int min_sum = INT32_MAX;
    int sumofk = 0;
    int ans = 0;
 
    for(int i=k; i<n+1; i++)
    {
        sumofk = cummulative_arr[i]-cummulative_arr[i-k];
        if (sumofk<min_sum)
        {
            ans = i-k+1;
            min_sum = sumofk;
        } 
 
 
    }
 
    cout << ans;
 
    
}
 
int32_t main(){
    int n,k;cin>>n>>k;
    vi arr;
    looper(i,0,n){
        int x;cin>>x;
        arr.pb(x);
    }
    solve(n,k,arr);
    return 0;
}