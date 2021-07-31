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
int zero_counter(string s){
    int n = s.size();
    int cnt=0;
    looper(i,0,s.size()){
        if(s[i]=='0') cnt++;
    }
    return cnt;
}
bool power_10(string s){
    sort(all(s));
    int n=s.size();
    if(s[0]=='0' & s[n-2]=='0' & s[n-1]=='1'){
        return true;
    }
    return false;
}
int32_t main(){
    int n;cin>>n;
    int zero_count=0;
    string hue;
    bool zero_found=false,non_good=false;
    looper(i,0,n){
        string x;cin>>x;
        if(x=="0"){
            zero_found=true;
        }else if(x=="1"){
            continue;
        }else if(power_10(x)){
            // cout<<log(x)<<endl;
            zero_count+= zero_counter(x);
        }else{
            hue=x;non_good=true;
        }
    }   
    // cout<<zero_count<<space<<hue<<endl;;
    if(zero_found) {cout<<0;}
    else{
        int ans=1;
        if(non_good){
            cout<<hue;
        }else{
            cout<<ans;

        }
        looper(i,0,zero_count){
            cout<<0;
        }
    }
    return 0;
}