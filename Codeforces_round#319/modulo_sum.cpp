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
#include <bits/stdc++.h>
using namespace std;

bool modularSum(vi arr, int n, int m)
{
    if (n > m)
        return true;
    bool dp[m];
    memset(dp, false, m);
    for (int i=0; i<n; i++)
    {

        if (dp[0])
            return true;
        bool temp[m];
        memset(temp,false,m);
        for (int j=0; j<m; j++){
            if (dp[j] == true){
                if (dp[(j+arr[i]) % m] == false) temp[(j+arr[i]) % m] = true;
            }
        }
        for (int j=0; j<m; j++){
            if (temp[j]) dp[j] = true;
        }
        dp[arr[i]%m] = true;
    }
    return dp[0];
} 
int32_t main(){
    int n,m;cin>>n>>m;
    vi arr;
    looper(i,0,n){
        int x;cin>>x;
        arr.pb(x);
    }
    if(modularSum(arr,n,m)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}