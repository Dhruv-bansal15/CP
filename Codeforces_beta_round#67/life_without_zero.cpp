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
    int a,b;cin>>a>>b;
    int c = a+b;
    string a_ = to_string(a);
    a_.erase(remove(a_.begin(), a_.end(), '0'), a_.end());   
    string b_ = to_string(b);
    b_.erase(remove(b_.begin(), b_.end(), '0'), b_.end());
    string c_ = to_string(c);
    c_.erase(remove(c_.begin(), c_.end(), '0'), c_.end());
    c = stoi(c_);
    a = stoi(a_);
    b= stoi(b_);
    if(a+b==c){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}