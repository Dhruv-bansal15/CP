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
#define mod 100000000
int nCr(int n, int r) {
    if(r>n) return 0;
    if(r > n - r) r = n - r; // because C(n, r) == C(n, n - r)
    long long ans = 1;
    int i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}    
int32_t main(){
    // cout<<nCr(1,2)<<endl;
    int n,m;cin>>n>>m;
    int few,more;
    int temp = n - (m-1);
    more = nCr(temp,2);
    temp = n/m;
    if(n%m==0){
        few = m*(nCr(n/m,2));
    }else{
        few = (n%m)*nCr(n/m + 1,2) + (m - n%m)*nCr(n/m,2);
    }
    cout<<few<<" "<<more;
    return 0;
}