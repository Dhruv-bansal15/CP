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
#define stc stack<char>
#define sti stack<int>
#define all(arr) arr.begin(),arr.end()
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
    
bool compare(pair<int,int> &one, pair<int,int> &two){
    return one.second < two.second;
}
int n,q,c;
int dp[11][101][101];
int32_t main(){
    cin>>n>>q>>c;
    // int dp[11][101][101];
    looper(i,0,n){
        int x, y, s;cin>>x>>y>>s;
        dp[s][x][y]++;
    }
    
    looper(p,0,c+1) {
        looper(i,1,101) {
            looper(j,1,101){
                dp[p][i][j] += dp[p][i - 1][j] + dp[p][i][j - 1] - dp[p][i - 1][j - 1];
            }
        }
    }
    
    looper(i,0,q){
        int t, x1, y1, x2, y2;cin>>t>>x1>>y1>>x2>>y2;
        int ans = 0;
        looper(p,0,c+1){
            int init_value = (p + t) % (c + 1);
            int huehue = dp[p][x2][y2] - dp[p][x1 - 1][y2] - dp[p][x2][y1 - 1] + dp[p][x1 - 1][y1 - 1];
            ans += init_value*huehue;
        }
        cout<<ans<<endl;
    }  
    return 0;
}