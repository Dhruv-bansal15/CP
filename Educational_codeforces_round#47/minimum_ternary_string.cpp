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
        string s;cin>>s;
        deque<int> a1,a2,a3;
        int sz = s.size();
        looper(i,0,sz){
            if(s[i]=='0') a1.pb(i);
            else if(s[i]=='1') a2.pb(i);
            else a3.pb(i);
        }
        string ans="";
        looper(i,0,sz){
            int a=INT64_MAX,b=INT64_MAX,c=INT64_MAX;
            if(a1.size()>=1) a=a1.front();
            if(a2.size()>=1) b=a2.front();
            if(a3.size()>=1) c=a3.front();
            if(a<c){
                ans.pb('0');
                a1.pop_front();
            }else if(b!=INT64_MAX){
                ans.pb('1');a2.pop_front();
            }else{
                ans.pb('2');a3.pop_front();
            }
        }
        cout<<ans<<endl;
        return 0;
}