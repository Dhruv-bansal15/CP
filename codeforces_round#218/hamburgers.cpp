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
int index_;
vi things_req;
vi things_he_have;
vi cost;
int money;
int max_nikalo(int a,int b){
    if(a>b){
        return a;
    }else{
        return b;
    }

}
bool possible(int n){
    int req_money = (max_nikalo(0,n*things_req[0] - things_he_have[0]))*cost[0] + (max_nikalo(0,n*things_req[1] - things_he_have[1]))*cost[1] + (max_nikalo(0,n*things_req[2] - things_he_have[2]))*cost[2];
    if(money>=req_money){
        return true;
    }else{
        return false;
    }
}

int32_t main(){
    string s;cin>>s;
    int n=s.size();
    
    looper(i,0,3){
        int x;cin>>x;
        things_he_have.pb(x);
    }  
    looper(i,0,n){
        char x = s[i];
        if(x=='B') things_req[0]++;
        else if(x=='S') things_req[1]++;
        else if(x=='C') things_req[2]++;
    }
    int max_ = INT64_MIN;
    looper(i,0,3){
        if(things_req[i]>max_) max_ = things_req[i];
    }
    looper(i,0,3){
        int x;cin>>x;
        cost.pb(x);
    }  
    cin>>money;
    auto it = find(things_req.begin(),things_req.end(), max_);
    if(it != things_req.end()){
 	    index_ = it - things_req.begin();
    }
    
    int left=0;
    int right = things_he_have[index_]/things_req[index_] + money/cost[index_] + 1;
    int ans;
    while(left<right){
        int mid = (left+right)/2;
        if(possible(mid)){
            left = mid+1;
            ans = mid;
        }else{
            right=mid-1;
        }
    }
    cout<<ans;
    return 0;
}