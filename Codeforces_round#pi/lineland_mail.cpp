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
    looper(i,0,n){
        int x;cin>>x;
        arr.pb(x);
    }
    cout<<arr[1] - arr[0]<<" "<<arr[n-1] - arr[0]<<endl;
    looper(i,1,n-1){
        if(arr[i+1] - arr[i]<arr[i] - arr[i-1]) cout<<arr[i+1] - arr[i]<<" ";
        else cout<<arr[i] - arr[i-1]<<" ";
        if(arr[n-1] - arr[i]>arr[i] - arr[0]) cout<<arr[n-1] - arr[i]<<endl;
        else cout<<arr[i] - arr[0]<<endl;

    }
    cout<<arr[n-1] - arr[n-1-1]<<" "<<arr[n-1] - arr[0];
    return 0;
}