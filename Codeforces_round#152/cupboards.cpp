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
    int left_open=0,right_open=0;
    looper(i,0,n){
        int a,b;cin>>a>>b;
        left_open+=a;right_open+=b;
    }
    int count=0;
    if(left_open<= n - left_open){
        count+= left_open;
    }else{
        count+= n - left_open;
    }
    if(right_open<= n - right_open){
        count+= right_open;
    }else{
        count+= n - right_open;
    }
    cout<<count;
    // cout<<max(2,4);   
    return 0;
}