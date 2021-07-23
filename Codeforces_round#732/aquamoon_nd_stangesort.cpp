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
    
    tester{
        int n;cin>>n;
        vector<pii> odd_places(100005),even_places(100000);
        vi arr;
        arr.pb(0);
        set<int> freq;
        looper(i,1,n+1){
            int x;cin>>x;
            freq.insert(x);
            arr.pb(x);
            if(i%2==0){
                even_places[x].ff+=1;
            }else{
                odd_places[x].ff+=1;
            }
        }
        sort(arr.begin(),arr.end());
        looper(i,1,n+1){
            int x= arr[i];
            // arr.pb(x);
            if(i%2==0){
                even_places[x].ss+=1;
            }else{
                odd_places[x].ss+=1;
            }
        }
        bool done=false;
        for(int i:freq){
            if((odd_places[i].ff == odd_places[i].ss) & (even_places[i].ff == even_places[i].ss)){
                continue;
            }else{
                cout<<"NO"<<endl;
                done=true;
                break;
            }
        }
        if(done==false){
            cout<<"YES"<<endl;
        }


    }
    


      
    return 0;
}