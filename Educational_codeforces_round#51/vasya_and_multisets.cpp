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
    int n;cin>>n;
    map<int,int> freq;
    vi arr;
    looper(i,0,n){
        int x;cin>>x;arr.pb(x);
        freq[x]++;
    }
    map<int,bool> result;
    int count=0;
    int number_hue;bool done=false;
    for(auto i:freq){
        if(i.ss==1){
            result[i.ff]=true;count++;
        }else if(i.ss>2){
            number_hue=i.ff;
            done=true;
        }
    }
    // for(auto i:result){
    //     cout<<i.ff<<space;
    // }

    // cout<<endl;
    // cout<<result.count(6)<<endl;
    // cout<<number_hue<<endl;
    if(count%2!=0){
        if(done==false){
            cout<<"NO"<<endl;
            return 0;
        }else{
            cout<<"YES"<<endl;
            bool hue=false;
            int j=0;
            looper(i,0,n){
                if(arr[i]==number_hue & hue==false){
                    cout<<'B';hue=true;
                    continue;
                }
                if(j<count/2 + 1){
                    if(result.count(arr[i])){
                        cout<<'A';j++;
                    }else{
                        cout<<'A';
                    }
                }else{
                    if(result.count(arr[i])){
                        cout<<'B';
                    }else{
                        cout<<'A';
                    }
                }
            }
        }
    }else{
        cout<<"YES"<<endl;
        int j=0;
        looper(i,0,n){
                if(j<count/2){
                    if(result.count(arr[i])){
                        cout<<'A';j++;
                    }else{
                        cout<<'A';
                    }
                }else{
                    if(result.count(arr[i])){
                        cout<<'B';
                    }else{
                        cout<<'A';
                    }
                }
            }
        
    }

    return 0;
}