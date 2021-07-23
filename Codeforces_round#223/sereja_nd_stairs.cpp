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
    int n;cin>>n;
    vi arr;
    int max_ele=INT64_MIN;
    map<int,int> freq;
    vi req_no;
    looper(i,0,n){
        int x;cin>>x;
        if(x>max_ele) max_ele = x;
        arr.pb(x);
        freq[x]++;
    }
    
    for(auto i : freq){
        if(i.ff==max_ele){
            req_no.pb(i.ff);
            continue;
        }
        if(i.ss<=2){
            if(i.ss==2){
                req_no.pb(i.ff);
                req_no.pb(i.ff);
            }else if(i.ss==1){
                req_no.pb(i.ff);
            }
        }else{
            req_no.pb(i.ff);
            req_no.pb(i.ff);
        }
    }
    cout<<req_no.size()<<endl;
    deque<int> final;
    int visit=INT64_MIN;
    for(int i= req_no.size() - 1;i>=0;i--){
        if(req_no[i]!=visit){
            final.push_back(req_no[i]);
            visit= req_no[i];
        }else{
            final.push_front(req_no[i]);
        }
    }
    
    while(final.size()){
        cout<<final.front()<<" ";
        final.pop_front();
    }
    return 0;
}