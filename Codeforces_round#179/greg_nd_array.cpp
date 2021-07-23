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
    int n,m,k;cin>>n>>m>>k;
    vi arr;
    looper(i,0,n){
        int x;cin>>x;arr.pb(x);
    }   
    arr.pb(0);
    vector<vi> operations;
    operations.pb({0,0,0});
    looper(i,0,m){
        vi jugaad;
        looper(j,0,3){
            int x;cin>>x;
            jugaad.pb(x);
        }
        operations.pb(jugaad);
    }
    vi prefix(m+5);
    looper(i,0,k){
        int a,b;cin>>a>>b;
        prefix[a]+=1;prefix[b+1]-=1;
    }
    looper(i,1,m+1){
        prefix[i] = prefix[i] + prefix[i-1];
    }
    vi arr1(n+1);
    looper(i,1,m+1){
        vi temp = operations[i];
        int a = temp[0],b= temp[1];
        int increment = temp[2];
        int count= prefix[i];
        arr1[a-1]+= count*(increment);
        arr1[b+1-1]-= count*increment;
    }
    looper(i,1,n){
        arr1[i] = arr1[i] + arr1[i-1];
    }
    looper(i,0,n){
        arr[i]+= arr1[i];
        cout<<arr[i]<<" ";
    }
    return 0;
}