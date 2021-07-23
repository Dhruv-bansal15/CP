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
    
int32_t main(){
    int n,d;cin>>n>>d;
    vector<pii> arr;
    looper(i,0,n){
        int a,b;cin>>a>>b;arr.pb({a,b});
    }   
    sort(arr.begin(),arr.end());
    // if(n==1){
    //     cout<<arr[0].ss;
    //     return 0;
    // }
    //take prefix sum bacha
    looper(i,1,n){
        arr[i].ss+= arr[i-1].ss;
    }
    vi result;
    int ans=INT64_MIN;
    looper(i,0,n){
        int low=i+1,high=n-1;
        int curr=i;
        while(low<=high){
            int mid= (low + high)/2;
            if(arr[mid].ff - arr[i].ff < d){
                curr=mid;low=mid+1;
            }else{
                high=mid-1;
            }
        }
        if(i==0){
            result.pb(arr[curr].ss);
            if(arr[curr].ss > ans) ans= arr[curr].ss;
        }else{
            result.pb(arr[curr].ss  - arr[i-1].ss);
            if((arr[curr].ss  - arr[i-1].ss) > ans) ans = arr[curr].ss  - arr[i-1].ss;
        }

    }
    
    cout<<ans;
    return 0;
}