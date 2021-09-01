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
        set<pii> s;
        looper(i,0,2*n){
            int x;cin>>x;
            s.insert({x,i+1}); // one based kardi
        }
        int ans=0;
        int posA=1,posB=1;
        looper(i,0,n){
            auto curr1 = *s.begin();
            s.erase(s.begin());
            auto curr2 = *s.begin();
            s.erase(s.begin());
            int ans1 = abs(curr1.ss - posA) + abs(curr2.ss - posB);
            int ans2 = abs(curr2.ss - posA) + abs(curr1.ss - posB);
            if(ans1>ans2){
                ans+= ans2;
                posA = curr2.ss;posB = curr1.ss;
            }else{
                ans+= ans1;
                posA=curr1.ss;posB=curr2.ss;
            }
        }
        cout<<ans<<endl;
        return 0;
}