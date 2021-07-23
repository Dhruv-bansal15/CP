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
    int total=0;
    vi arr;
    looper(i,0,n){
        int x;cin>>x;
        total+=x;arr.pb(x);
    }   
    int x,y;cin>>x>>y;
    int indexx;
    int sum_=0;
    bool done=false;
    looper(i,0,n){
        sum_+= arr[i];
        if(sum_>=x & sum_<=y & (total-sum_)>=x & (total-sum_)<=y){
            indexx=i+2;
            done=true;
        }
    }
    if(done==true){
        cout<<indexx;
    }else{
        cout<<0;
    }
    
    return 0;
}