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
#define pii pair<int,int>
#define pb push_back
#define ff first
#define tester int t;cin>>t;while(t--)
#define looper(a,b,c) for(int a=b;a<c;a++)
#define ss second
#define pqb priority_queue<int>
#define pqs priority_queue<int,vi,greater<int> >
#define mod 1000000007
    
int32_t main(){
    string s;cin>>s;
    vi h;
    vi e;
    vi l;
    vi o;
    // cout<<h.size()<<endl;
    looper(i,0,s.size()){
        if(s[i]=='h'){
            h.pb(i);
            // cout<<'h';
        }else if(s[i]=='e' && h.size()>=1){
            e.pb(i);
            // cout<<'e';
        }else if(s[i]=='l' && e.size()>=1){
            l.pb(i);
            // cout<<'l';
        }else if(s[i]=='o' && l.size()>=2){
            o.pb(i);
            // cout<<'o';
        }
    }   
    if(h.size()>=1 & e.size()>=1 & l.size()>=2 & o.size()>=1){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}