#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <stack>
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
int32_t main(){
    int n;cin>>n;
    string s;cin>>s;
    vi end_(n,0),start_(n,0);
    int max_gold=0;
    looper(i,0,n){
        if(s[i]=='G' & i>0){
            max_gold++;
            end_[i] = 1 + end_[i-1];
        }else if(s[i]=='G' & i==0){
            end_[i]=1;
            max_gold++;
        }
    }   
    for(int i=n-1;i>=0;i--){
        if(s[i]=='G' & i==n-1){
            start_[i]=1;
        }else if(s[i]=='G' & i>=0){
            start_[i] = 1 + start_[i+1];
        }
    }
    int ans=0;
    int curr;
    if(s[0]=='S' & n>=2){
        curr = 1 + start_[1];
        ans=max(ans,curr);
        curr=0;
    }
    if(s[n-1]=='S' & n>=2){
        curr = 1 + end_[n-2];
        ans=max(ans,curr);
        curr=0;
    }
    looper(i,1,n-1){
        if(s[i]=='S'){
            int curr_ = 1 + start_[i+1] + end_[i-1];
            ans= max(ans,curr_); 
        }
    }
    ans= min(ans,max_gold);
    if(max_gold==n){
        ans=n;
    } // no silver found 
    cout<<ans<<endl;
    return 0;
}