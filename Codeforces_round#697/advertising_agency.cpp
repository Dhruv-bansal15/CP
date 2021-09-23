#include <iostream>
#include <cstdio>
#include <stack>
#include <bits/stdc++.h>
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
#define invi(n) vi arr(n); for(int i=0; i<n; i++) cin >> arr[i];
#define stc stack<char>
#define sti stack<int>
#define all(arr) arr.begin(),arr.end()
#define looprev(i,a,b) for(int i=a;i>=(b);i--)
#define logarr(arr,a,b) for(int z=(a);z<=(b);z++) std::cout<<(arr[z])<<space;std::cout<<std::endl;
#define si set<int>
int mod_lelo(int x,int m = mod){
    x %= m;
    return ((x < 0) ? (x + m) : x);
}
vi fact(1010), invfact(1010), inv(1010);
void init_fact(int m = mod){
    inv[0] = 0;
    inv[1] = fact[0] = fact[1] = invfact[0] = invfact[1] = 1;
    looper(i,2,1010){
        fact[i] = mod_lelo(fact[i - 1] * i, m);
        inv[i] = m - (m / i) * inv[m % i] % m;
        invfact[i] = mod_lelo(inv[i] * invfact[i - 1], m);
    }
}
int nCr(int n,int r){
    if(r>=0 & r <= n) {
        return mod_lelo(fact[n] * mod_lelo(invfact[r] * invfact[n - r]));
    }
    return 0;
}
    
bool compare(pair<int,int> &one, pair<int,int> &two){
    return one.second < two.second;
}
int32_t main(){
    init_fact();
    tester{
        int n,k;cin>>n>>k;
        invi(n);
        sort(all(arr), greater<int>());
        int max_sum=0;
        looper(i,0,k){
            max_sum+= arr[i];
        }
        int r =0;
        for(int i=k-1;i>=0;i--) {
            if(arr[i] == arr[k -1]) {
                r++;
            }
            else{
                break;
            }
        }
        int tot = count(all(arr),arr[k - 1]);
        cout<<nCr(tot,r)<<endl;
    }   
    return 0;
}