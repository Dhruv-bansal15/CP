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
    tester{
        int n,y;cin>>n>>y;
        vi arr;
        unordered_map<int,int> m;
        unordered_map<int,int> init;
        looper(i,0,n){
            int x;cin>>x;arr.pb(x);
            init[x]++;m[x^y]++;
        }
        int max_iter=-1;
        int cost=-1;
        for(auto i:init){
            if(i.ss + m[i.ff]>max_iter){
                max_iter= i.ss + m[i.ff];
                cost=m[i.ff];
            }else if(i.ss + m[i.ff]==max_iter){
                if(m[i.ff]<cost){
                    cost=m[i.ff];
                }
            }
        }
        for(auto i:m){
            if(!init.count(i.ff)){
                if(i.ss>max_iter){
                    max_iter=i.ss;
                    cost=max_iter;
                }
            }
        }
        cout<<max_iter<<space<<cost<<endl;
    }
    return 0;
}