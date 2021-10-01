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
        int n,m;cin>>n>>m;
        mp mm;
        int cnt=0;
        looper(i,0,n){
            int x;cin>>x;
            x%=m,mm[x]++;
        }
        
        for(auto i:mm){
            if(i.ff==0){
                cnt++;
            }else if(i.ff== m-i.ff){
                cnt++;
            }else if (2*i.ff<m| mm.find(m-i.ff)==mm.end()) {
                int x =i.ss;
                int y =mm[m-i.ff];
                int diff = abs(x-y)-1;
                if(diff<=0){
                    cnt++;
                }else{
                    cnt+= 1 + diff;
                }
            }
            // cout<<i.ff<<" "<<cnt<<endl;
        }
        cout<<cnt<<endl;
    }   
    return 0;
}