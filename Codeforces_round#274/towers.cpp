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
    int n,max_moves;cin>>n>>max_moves;
    vi arr;
    looper(i,0,n){
        int x;cin>>x;arr.pb(x);
    }
    int maxElementIndex,minElementIndex;
    int curr_moves=0;
    vector<pii> thar;
    while(curr_moves<max_moves){
        maxElementIndex = max_element(arr.begin(),arr.end()) - arr.begin();
        minElementIndex = min_element(arr.begin(),arr.end()) - arr.begin();
        int diff = arr[maxElementIndex] - arr[minElementIndex];
        if(diff>1){
            curr_moves++;
            thar.pb({maxElementIndex+1,minElementIndex+1});
            arr[maxElementIndex]--;arr[minElementIndex]++;
        }else{
            break;
        }
    }
    maxElementIndex = max_element(arr.begin(),arr.end()) - arr.begin();
    minElementIndex = min_element(arr.begin(),arr.end()) - arr.begin();
    cout<<arr[maxElementIndex] - arr[minElementIndex]<<" "<<curr_moves<<endl;
    looper(i,0,thar.size()){
        cout<<thar[i].ff<<" "<<thar[i].ss<<endl;
    }

    return 0;
}