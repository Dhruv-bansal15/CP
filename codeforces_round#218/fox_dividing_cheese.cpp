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
    int a1=0,a2=0,a3=0,b1=0,b2=0,b3=0;
    while(a%2==0){
        a1++;
        a/=2;
    }
    while(a%3==0){
        a2++;
        a/=3;
    }
    while(a%5==0){
        a3++;
        a/=5;
    }
    while(b%2==0){
        b1++;
        b/=2;
    }
    while(b%3==0){
        b2++;
        b/=3;
    }
    while(b%5==0){
        b3++;
        b/=5;
    }
    if(a!=b) cout<<-1<<endl;
    else{
        int count = abs(a1-b1) + abs(a2-b2) + abs(a3-b3);
        cout<<count<<endl;
    }


    return 0;
}