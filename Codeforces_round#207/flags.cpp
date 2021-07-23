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
    int n,m;cin>>n>>m;
    ump freq;
    vector<bool> visited(n+1,false);
    while(m--){
        int a,b,c;cin>>a>>b>>c;
        if(freq.count(a) | freq.count(b) | freq.count(c)){
            if(freq.count(a)){
                int temp = freq[a];
                if(temp==1){
                    freq[b]=2;freq[c]=3;
                }
                if(temp==2){
                    freq[b]=1;freq[c]=3;
                }
                if(temp==3){
                    freq[b]=1;freq[c]=2;
                }
            }else if(freq.count(b)){
                int temp = freq[b];
                if(temp==1){
                    freq[a]=2;freq[c]=3;
                }
                if(temp==2){
                    freq[a]=1;freq[c]=3;
                }
                if(temp==3){
                    freq[a]=1;freq[c]=2;
                } 
            }else if(freq.count(c)){
                int temp = freq[c];
                if(temp==1){
                    freq[a]=2;freq[b]=3;
                }
                if(temp==2){
                    freq[a]=1;freq[b]=3;
                }
                if(temp==3){
                    freq[a]=1;freq[b]=2;
                }
            }
        }else{
            freq[a]=1;freq[b]=2;freq[c]=3;
        }

    }
    looper(i,1,n+1){
        cout<<freq[i]<<space;
    }

    return 0;
}