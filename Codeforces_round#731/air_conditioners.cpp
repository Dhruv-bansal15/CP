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
    
int32_t main(){
    tester{
        int n,k;cin>>n>>k;
        vi conitioners_AC(n+1,INT64_MAX);
        vi arr;
        looper(i,0,k){
            int x;cin>>x;arr.pb(x);
        }
        looper(i,0,k){
            int x;cin>>x;
            conitioners_AC[arr[i]]=x;
        }
        vi left(n+1,INT64_MAX),right(n+1,INT64_MAX);
        int curr=INT64_MAX;
        looper(i,1,n+1){
            if(conitioners_AC[i]!= INT64_MAX){
                if(curr==INT64_MAX){
                    left[i]=conitioners_AC[i];
                    curr=conitioners_AC[i];
                }else{
                    if(curr+1>conitioners_AC[i]){
                        left[i]=conitioners_AC[i];curr=conitioners_AC[i];
                    }else{
                        left[i]=curr + 1;
                        curr++;
                    }
                }
            }else{
                if(curr!=INT64_MAX){
                    left[i]=curr+1;
                    curr++;
                }
            }
        }
        // logarr(conitioners_AC,1,conitioners_AC.size()-1);
        // cout<<"---------"<<endl;
        
        curr=INT64_MAX;
        for(int i=n;i>=1;i--){
            if(conitioners_AC[i]!= INT64_MAX){
                if(curr==INT64_MAX){
                    right[i]=conitioners_AC[i];
                    curr=conitioners_AC[i];
                }else{
                    if(curr+1>conitioners_AC[i]){
                        right[i]=conitioners_AC[i];curr=conitioners_AC[i];
                    }else{
                        right[i]=curr + 1;
                        curr++;
                    }
                }
            }else{
                if(curr!=INT64_MAX){
                    right[i]=curr+1;
                    curr++;
                }
            }
        }
        looper(i,1,n+1){
            int ans=min(left[i],right[i]);
            cout<<ans<<space;
        }
        cout<<endl;
    }   
    return 0;
}