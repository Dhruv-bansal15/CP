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
    vector<pii> arr;
    int count=0;
    map<int,int> freq;
    looper(i,0,n){
        int a,b;cin>>a>>b;
        arr.pb({a,b});
        if(count!=n/2){
            freq[a]=1;freq[b]=1;
            count++;
        }
    }   
    int i=0,j=0;
    count=0;
    while(i<n & j<n & count!=n){
        if(arr[i].ff < arr[j].ss){
            freq[arr[i].ff]=1;count++;
            i++;
        }else if(arr[i].ff>arr[j].ss){
            freq[arr[j].ss]=1;count++;
            j++;
        }
    }
    string s1="",s2="";
    for(auto i:arr){
        if(freq.count(i.ff)){
            s1.pb('1');
        }else{
            s1.pb('0');
        }
        if(freq.count(i.ss)){
            s2.pb('1');
        }else{
            s2.pb('0');
        }
    }
    cout<<s1<<"\n"<<s2;
    return 0;
}