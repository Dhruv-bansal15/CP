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
    int n,t;cin>>n>>t;
    int i,j;
    if(n%2==0){
        if(t>n/2){
            j=t-n/2;
            cout<<2+(j-1)*2;
        }else if(t<=n/2){
            i= t;
            cout<<1+(i-1)*2;
        }
    }else{
        if(t>n/2+1){
            j = t - (n/2 + 1);
            // cout<<j<<" ";
            cout<<2+(j-1)*2;
        }else if(t<= n/2+1){
            i=t;
            cout<<1+(i-1)*2;
        }
    }
    return 0;
}