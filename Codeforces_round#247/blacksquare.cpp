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
    int a,b,c,d;cin>>a>>b>>c>>d;
    string s;cin>>s;
    int count=0;
    looper(i,0,s.size()){
        if(s[i]=='1') count+= a;
        else if(s[i]=='2') count+= b;
        else if(s[i]=='3') count+= c;
        else if(s[i]=='4') count+= d;
    }   
    cout<<count;
    return 0;
}